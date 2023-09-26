// Fill out your copyright notice in the Description page of Project Settings.


#include "LanzaGuisantes.h"


ALanzaGuisantes::ALanzaGuisantes()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	MeshPlanta->SetStaticMesh(PlantMesh.Object);

}
