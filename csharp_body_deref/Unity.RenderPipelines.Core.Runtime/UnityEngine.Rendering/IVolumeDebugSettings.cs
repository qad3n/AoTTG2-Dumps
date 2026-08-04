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

[Token(Token = "0x20000FC")]
[Obsolete("This variant is obsolete and kept only for not breaking user code. Use IVolumeDebugSettings2 for all new usage.", false)]
public interface IVolumeDebugSettings
{
	[Token(Token = "0x170000C9")]
	int selectedComponent
	{
		[Token(Token = "0x6000833")]
		get;
		[Token(Token = "0x6000834")]
		set;
	}

	[Token(Token = "0x170000CA")]
	Camera selectedCamera
	{
		[Token(Token = "0x6000835")]
		get;
	}

	[Token(Token = "0x170000CB")]
	IEnumerable<Camera> cameras
	{
		[Token(Token = "0x6000836")]
		get;
	}

	[Token(Token = "0x170000CC")]
	int selectedCameraIndex
	{
		[Token(Token = "0x6000837")]
		get;
		[Token(Token = "0x6000838")]
		set;
	}

	[Token(Token = "0x170000CD")]
	VolumeStack selectedCameraVolumeStack
	{
		[Token(Token = "0x6000839")]
		get;
	}

	[Token(Token = "0x170000CE")]
	LayerMask selectedCameraLayerMask
	{
		[Token(Token = "0x600083A")]
		get;
	}

	[Token(Token = "0x170000CF")]
	Vector3 selectedCameraPosition
	{
		[Token(Token = "0x600083B")]
		get;
	}

	[Token(Token = "0x170000D0")]
	Type selectedComponentType
	{
		[Token(Token = "0x600083C")]
		get;
		[Token(Token = "0x600083D")]
		set;
	}

	[Token(Token = "0x600083E")]
	Volume[] GetVolumes();

	[Token(Token = "0x600083F")]
	bool VolumeHasInfluence(Volume volume);

	[Token(Token = "0x6000840")]
	bool RefreshVolumes(Volume[] newVolumes);

	[Token(Token = "0x6000841")]
	float GetVolumeWeight(Volume volume);
}
