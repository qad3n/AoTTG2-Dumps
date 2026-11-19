// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.IVolumeDebugSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000D2")]
[Obsolete("This is not longer supported Please use DebugDisplaySettingsVolume. #from(6000.2)")]
public interface IVolumeDebugSettings
{
	[Token(Token = "0x170000B2")]
	int selectedComponent
	{
		[Token(Token = "0x6000794")]
		get;
		[Token(Token = "0x6000795")]
		set;
	}

	[Token(Token = "0x170000B3")]
	Camera selectedCamera
	{
		[Token(Token = "0x6000796")]
		get;
	}

	[Token(Token = "0x170000B4")]
	IEnumerable<Camera> cameras
	{
		[Token(Token = "0x6000797")]
		get;
	}

	[Token(Token = "0x170000B5")]
	int selectedCameraIndex
	{
		[Token(Token = "0x6000798")]
		get;
		[Token(Token = "0x6000799")]
		set;
	}

	[Token(Token = "0x170000B6")]
	VolumeStack selectedCameraVolumeStack
	{
		[Token(Token = "0x600079A")]
		get;
	}

	[Token(Token = "0x170000B7")]
	LayerMask selectedCameraLayerMask
	{
		[Token(Token = "0x600079B")]
		get;
	}

	[Token(Token = "0x170000B8")]
	Vector3 selectedCameraPosition
	{
		[Token(Token = "0x600079C")]
		get;
	}

	[Token(Token = "0x170000B9")]
	Type selectedComponentType
	{
		[Token(Token = "0x600079D")]
		get;
		[Token(Token = "0x600079E")]
		set;
	}

	[Token(Token = "0x600079F")]
	Volume[] GetVolumes();

	[Token(Token = "0x60007A0")]
	bool VolumeHasInfluence(Volume volume);

	[Token(Token = "0x60007A1")]
	bool RefreshVolumes(Volume[] newVolumes);

	[Token(Token = "0x60007A2")]
	float GetVolumeWeight(Volume volume);
}
