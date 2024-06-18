// Shoot Them Up Game, All Rights Reserved 


#include "STUGameHUD.h"
#include "Engine/Canvas.h"

void ASTUGameHUD::DrawHUD()
{
	Super::DrawHUD();

	DrawCrossHair();
}

void ASTUGameHUD::DrawCrossHair()
{
	const TInterval<float> Center(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);
	const float HalfLineSzie = 10.0f;
	const float LineThickness = 2.0f;
	const FLinearColor LineColor = FLinearColor::Green;
	
	DrawLine(Center.Min - HalfLineSzie, Center.Max, Center.Min + HalfLineSzie, Center.Max, LineColor, LineThickness);
	DrawLine(Center.Min, Center.Max - HalfLineSzie, Center.Min, Center.Max + HalfLineSzie, LineColor, LineThickness);
}
