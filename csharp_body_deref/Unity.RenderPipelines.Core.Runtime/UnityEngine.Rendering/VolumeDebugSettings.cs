// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeDebugSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000108")]
public abstract class VolumeDebugSettings<T> : IVolumeDebugSettings2, IVolumeDebugSettings where T : MonoBehaviour, IAdditionalData
{
	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x0")]
	private Camera m_SelectedCamera;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x0")]
	protected int m_SelectedCameraIndex;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x0")]
	private Camera[] m_CamerasArray;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x0")]
	private List<Camera> m_Cameras;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x0")]
	private static List<(string, Type)> s_ComponentPathAndType;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0x0")]
	private float[] weights;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x0")]
	private Volume[] volumes;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x0")]
	private VolumeParameter[,] savedStates;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x0")]
	private static List<Type> s_ComponentTypes;

	[Token(Token = "0x170000E5")]
	public int selectedComponent
	{
		[Token(Token = "0x6000880")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000881")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public Camera selectedCamera
	{
		[Token(Token = "0x6000882")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E7")]
	public int selectedCameraIndex
	{
		[Token(Token = "0x6000883")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000884")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public IEnumerable<Camera> cameras
	{
		[Token(Token = "0x6000885")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E9")]
	public abstract VolumeStack selectedCameraVolumeStack
	{
		[Token(Token = "0x6000886")]
		get;
	}

	[Token(Token = "0x170000EA")]
	public abstract LayerMask selectedCameraLayerMask
	{
		[Token(Token = "0x6000887")]
		get;
	}

	[Token(Token = "0x170000EB")]
	public abstract Vector3 selectedCameraPosition
	{
		[Token(Token = "0x6000888")]
		get;
	}

	[Token(Token = "0x170000EC")]
	public Type selectedComponentType
	{
		[Token(Token = "0x6000889")]
		get
		{
			return null;
		}
		[Token(Token = "0x600088A")]
		set
		{
		}
	}

	[Token(Token = "0x170000ED")]
	public List<(string, Type)> volumeComponentsPathAndType
	{
		[Token(Token = "0x600088B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EE")]
	public abstract Type targetRenderPipeline
	{
		[Token(Token = "0x600088C")]
		get;
	}

	[Token(Token = "0x170000EF")]
	[Obsolete("Please use volumeComponentsPathAndType instead, and get the second element of the tuple", false)]
	public static List<Type> componentTypes
	{
		[Token(Token = "0x6000897")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F0")]
	[Obsolete("Cameras are auto registered/unregistered, use property cameras", false)]
	protected static List<T> additionalCameraDatas
	{
		[Token(Token = "0x6000899")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600089A")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600088D")]
	internal VolumeParameter GetParameter(VolumeComponent component, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x600088E")]
	internal VolumeParameter GetParameter(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x600088F")]
	internal VolumeParameter GetParameter(Volume volume, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x6000890")]
	private float ComputeWeight(Volume volume, Vector3 triggerPos)
	{
		return default(float);
	}

	[Token(Token = "0x6000891")]
	public Volume[] GetVolumes()
	{
		return null;
	}

	[Token(Token = "0x6000892")]
	private VolumeParameter[,] GetStates()
	{
		return null;
	}

	[Token(Token = "0x6000893")]
	private bool ChangedStates(VolumeParameter[,] newStates)
	{
		return default(bool);
	}

	[Token(Token = "0x6000894")]
	public bool RefreshVolumes(Volume[] newVolumes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000895")]
	public float GetVolumeWeight(Volume volume)
	{
		return default(float);
	}

	[Token(Token = "0x6000896")]
	public bool VolumeHasInfluence(Volume volume)
	{
		return default(bool);
	}

	[Token(Token = "0x6000898")]
	[Obsolete("Please use componentPathAndType instead, and get the first element of the tuple", false)]
	public static string ComponentDisplayName(Type component)
	{
		return null;
	}

	[Token(Token = "0x600089B")]
	[Obsolete("Cameras are auto registered/unregistered", false)]
	public static void RegisterCamera(T additionalCamera)
	{
	}

	[Token(Token = "0x600089C")]
	[Obsolete("Cameras are auto registered/unregistered", false)]
	public static void UnRegisterCamera(T additionalCamera)
	{
	}

	[Token(Token = "0x600089D")]
	protected VolumeDebugSettings()
	{
	}
}
