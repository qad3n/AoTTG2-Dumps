// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeDebugSettings
// Update status: CHANGED in this game update
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

[Token(Token = "0x20000DE")]
[Obsolete("This is not longer supported Please use DebugDisplaySettingsVolume. #from(6000.2)")]
public abstract class VolumeDebugSettings<T> : IVolumeDebugSettings where T : MonoBehaviour, IAdditionalData
{
	[Token(Token = "0x40002D8")]
	[FieldOffset(Offset = "0x0")]
	protected int m_SelectedCameraIndex;

	[Token(Token = "0x40002D9")]
	[FieldOffset(Offset = "0x0")]
	private Camera[] m_CamerasArray;

	[Token(Token = "0x40002DA")]
	[FieldOffset(Offset = "0x0")]
	private List<Camera> m_Cameras;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x0")]
	private float[] weights;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x0")]
	private Volume[] volumes;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x0")]
	private VolumeParameter[,] savedStates;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x0")]
	private static List<Type> s_ComponentTypes;

	[Token(Token = "0x170000CE")]
	public int selectedComponent
	{
		[Token(Token = "0x60007E2")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007E3")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000CF")]
	public Camera selectedCamera
	{
		[Token(Token = "0x60007E4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	public int selectedCameraIndex
	{
		[Token(Token = "0x60007E5")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007E6")]
		set
		{
		}
	}

	[Token(Token = "0x170000D1")]
	public IEnumerable<Camera> cameras
	{
		[Token(Token = "0x60007E7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public abstract VolumeStack selectedCameraVolumeStack
	{
		[Token(Token = "0x60007E8")]
		get;
	}

	[Token(Token = "0x170000D3")]
	public abstract LayerMask selectedCameraLayerMask
	{
		[Token(Token = "0x60007E9")]
		get;
	}

	[Token(Token = "0x170000D4")]
	public abstract Vector3 selectedCameraPosition
	{
		[Token(Token = "0x60007EA")]
		get;
	}

	[Token(Token = "0x170000D5")]
	public Type selectedComponentType
	{
		[Token(Token = "0x60007EB")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007EC")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	public List<(string, Type)> volumeComponentsPathAndType
	{
		[Token(Token = "0x60007ED")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	[Obsolete("This property is obsolete and kept only for not breaking user code. VolumeDebugSettings will use current pipeline when it needs to gather volume component types and paths. #from(2023.2)")]
	public virtual Type targetRenderPipeline
	{
		[Token(Token = "0x60007EE")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	[Obsolete("Please use volumeComponentsPathAndType instead, and get the second element of the tuple #from(2022.2)")]
	public static List<Type> componentTypes
	{
		[Token(Token = "0x60007F9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D9")]
	[Obsolete("Cameras are auto registered/unregistered, use property cameras #from(2022.2)")]
	protected static List<T> additionalCameraDatas
	{
		[Token(Token = "0x60007FB")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60007FC")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60007EF")]
	internal VolumeParameter GetParameter(VolumeComponent component, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007F0")]
	internal VolumeParameter GetParameter(FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	internal VolumeParameter GetParameter(Volume volume, FieldInfo field)
	{
		return null;
	}

	[Token(Token = "0x60007F2")]
	private float ComputeWeight(Volume volume, Vector3 triggerPos)
	{
		return default(float);
	}

	[Token(Token = "0x60007F3")]
	public Volume[] GetVolumes()
	{
		return null;
	}

	[Token(Token = "0x60007F4")]
	private VolumeParameter[,] GetStates()
	{
		return null;
	}

	[Token(Token = "0x60007F5")]
	private bool ChangedStates(VolumeParameter[,] newStates)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F6")]
	public bool RefreshVolumes(Volume[] newVolumes)
	{
		return default(bool);
	}

	[Token(Token = "0x60007F7")]
	public float GetVolumeWeight(Volume volume)
	{
		return default(float);
	}

	[Token(Token = "0x60007F8")]
	public bool VolumeHasInfluence(Volume volume)
	{
		return default(bool);
	}

	[Token(Token = "0x60007FA")]
	[Obsolete("Please use componentPathAndType instead, and get the first element of the tuple #from(2022.2)")]
	public static string ComponentDisplayName(Type component)
	{
		return null;
	}

	[Token(Token = "0x60007FD")]
	[Obsolete("Cameras are auto registered/unregistered #from(2022.2)")]
	public static void RegisterCamera(T additionalCamera)
	{
	}

	[Token(Token = "0x60007FE")]
	[Obsolete("Cameras are auto registered/unregistered #from(2022.2)")]
	public static void UnRegisterCamera(T additionalCamera)
	{
	}

	[Token(Token = "0x60007FF")]
	protected VolumeDebugSettings()
	{
	}
}
