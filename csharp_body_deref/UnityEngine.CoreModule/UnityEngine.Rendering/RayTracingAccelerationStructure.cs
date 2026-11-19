// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RayTracingAccelerationStructure
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering;

[Token(Token = "0x200035A")]
[MovedFrom("UnityEngine.Experimental.Rendering")]
public sealed class RayTracingAccelerationStructure : IDisposable
{
	[Token(Token = "0x200035B")]
	[Flags]
	public enum RayTracingModeMask
	{
		[Token(Token = "0x40009B5")]
		Nothing = 0,
		[Token(Token = "0x40009B6")]
		Static = 2,
		[Token(Token = "0x40009B7")]
		DynamicTransform = 4,
		[Token(Token = "0x40009B8")]
		DynamicGeometry = 8,
		[Token(Token = "0x40009B9")]
		DynamicGeometryManualUpdate = 0x10,
		[Token(Token = "0x40009BA")]
		Everything = Static | DynamicTransform | DynamicGeometry | DynamicGeometryManualUpdate
	}

	[Token(Token = "0x200035C")]
	public enum ManagementMode
	{
		[Token(Token = "0x40009BC")]
		Manual,
		[Token(Token = "0x40009BD")]
		Automatic
	}

	[Token(Token = "0x200035D")]
	public struct BuildSettings
	{
		[Token(Token = "0x17000319")]
		public RayTracingAccelerationStructureBuildFlags buildFlags
		{
			[Token(Token = "0x6001318")]
			[Address(RVA = "0x69408D0", Offset = "0x693F8D0", VA = "0x69408D0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700031A")]
		public Vector3 relativeOrigin
		{
			[Token(Token = "0x6001319")]
			[Address(RVA = "0x69408E0", Offset = "0x693F8E0", VA = "0x69408E0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600131A")]
		[Address(RVA = "0x69408F0", Offset = "0x693F8F0", VA = "0x69408F0")]
		public BuildSettings()
		{
		}
	}

	[Token(Token = "0x200035E")]
	public struct Settings
	{
		[Token(Token = "0x40009C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ManagementMode managementMode;

		[Token(Token = "0x40009C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public RayTracingModeMask rayTracingModeMask;

		[Token(Token = "0x40009C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int layerMask;

		[Token(Token = "0x1700031B")]
		public RayTracingAccelerationStructureBuildFlags buildFlagsStaticGeometries
		{
			[Token(Token = "0x600131B")]
			[Address(RVA = "0x6940940", Offset = "0x693F940", VA = "0x6940940")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700031C")]
		public RayTracingAccelerationStructureBuildFlags buildFlagsDynamicGeometries
		{
			[Token(Token = "0x600131C")]
			[Address(RVA = "0x6940950", Offset = "0x693F950", VA = "0x6940950")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700031D")]
		public bool enableCompaction
		{
			[Token(Token = "0x600131D")]
			[Address(RVA = "0x6940960", Offset = "0x693F960", VA = "0x6940960")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600131E")]
		[Address(RVA = "0x6940970", Offset = "0x693F970", VA = "0x6940970")]
		public Settings()
		{
		}
	}

	[Token(Token = "0x200035F")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600131F")]
		[Address(RVA = "0x6940990", Offset = "0x693F990", VA = "0x6940990")]
		public static IntPtr ConvertToNative(RayTracingAccelerationStructure rayTracingAccelerationStructure)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40009B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x693FDA0", Offset = "0x693EDA0", VA = "0x693FDA0", Slot = "1")]
	~RayTracingAccelerationStructure()
	{
	}

	[Token(Token = "0x6001300")]
	[Address(RVA = "0x693FE10", Offset = "0x693EE10", VA = "0x693FE10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001301")]
	[Address(RVA = "0x693FDB0", Offset = "0x693EDB0", VA = "0x693FDB0")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001302")]
	[Address(RVA = "0x693FF00", Offset = "0x693EF00", VA = "0x693FF00")]
	public RayTracingAccelerationStructure(Settings settings)
	{
	}

	[Token(Token = "0x6001303")]
	[Address(RVA = "0x693FFA0", Offset = "0x693EFA0", VA = "0x693FFA0")]
	public int AddInstance(in RayTracingMeshInstanceConfig config, Matrix4x4 matrix, [Optional][DefaultValue("null")] Matrix4x4? prevMatrix, uint id = 4294967295u)
	{
		return default(int);
	}

	[Token(Token = "0x6001304")]
	[Address(RVA = "0x69403E0", Offset = "0x693F3E0", VA = "0x69403E0")]
	public void RemoveInstance(int handle)
	{
	}

	[Token(Token = "0x6001305")]
	[Address(RVA = "0x6940480", Offset = "0x693F480", VA = "0x6940480")]
	public void UpdateInstanceTransform(int handle, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x6940560", Offset = "0x693F560", VA = "0x6940560")]
	public void UpdateInstanceID(int handle, uint instanceID)
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x6940600", Offset = "0x693F600", VA = "0x6940600")]
	public void UpdateInstanceMask(int handle, uint mask)
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x69406A0", Offset = "0x693F6A0", VA = "0x69406A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::ClearInstances", HasExplicitThis = true)]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x693FF60", Offset = "0x693EF60", VA = "0x693FF60")]
	[UnityEngine.Bindings.FreeFunction("RayTracingAccelerationStructure_Bindings::Create")]
	private static IntPtr Create(Settings desc)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x693FEB0", Offset = "0x693EEB0", VA = "0x693FEB0")]
	[UnityEngine.Bindings.FreeFunction("RayTracingAccelerationStructure_Bindings::Destroy")]
	private static void Destroy(RayTracingAccelerationStructure accelStruct)
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x6940430", Offset = "0x693F430", VA = "0x6940430")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::RemoveInstance", HasExplicitThis = true)]
	private void RemoveInstance_InstanceID(int instanceID)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x6940500", Offset = "0x693F500", VA = "0x6940500")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceTransform", HasExplicitThis = true)]
	private void UpdateInstanceTransform_Handle(int handle, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x6940650", Offset = "0x693F650", VA = "0x6940650")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceMask", HasExplicitThis = true)]
	private void UpdateInstanceMask_Handle(int handle, uint mask)
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x69405B0", Offset = "0x693F5B0", VA = "0x69405B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceID", HasExplicitThis = true)]
	private void UpdateInstanceID_Handle(int handle, uint id)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x6940360", Offset = "0x693F360", VA = "0x6940360")]
	[UnityEngine.Bindings.FreeFunction("RayTracingAccelerationStructure_Bindings::AddMeshInstance", HasExplicitThis = true)]
	private unsafe int AddMeshInstance(RayTracingMeshInstanceConfig config, Matrix4x4 matrix, Matrix4x4* prevMatrix, uint id = 4294967295u)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001310")]
	[Address(RVA = "0x69406F0", Offset = "0x693F6F0", VA = "0x69406F0")]
	private static extern void ClearInstances_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001311")]
	[Address(RVA = "0x6940720", Offset = "0x693F720", VA = "0x6940720")]
	private static extern IntPtr Create_Injected([In] ref Settings desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001312")]
	[Address(RVA = "0x6940750", Offset = "0x693F750", VA = "0x6940750")]
	private static extern void Destroy_Injected(IntPtr accelStruct);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001313")]
	[Address(RVA = "0x6940780", Offset = "0x693F780", VA = "0x6940780")]
	private static extern void RemoveInstance_InstanceID_Injected(IntPtr _unity_self, int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001314")]
	[Address(RVA = "0x69407C0", Offset = "0x693F7C0", VA = "0x69407C0")]
	private static extern void UpdateInstanceTransform_Handle_Injected(IntPtr _unity_self, int handle, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001315")]
	[Address(RVA = "0x6940800", Offset = "0x693F800", VA = "0x6940800")]
	private static extern void UpdateInstanceMask_Handle_Injected(IntPtr _unity_self, int handle, uint mask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001316")]
	[Address(RVA = "0x6940840", Offset = "0x693F840", VA = "0x6940840")]
	private static extern void UpdateInstanceID_Handle_Injected(IntPtr _unity_self, int handle, uint id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001317")]
	[Address(RVA = "0x6940880", Offset = "0x693F880", VA = "0x6940880")]
	private unsafe static extern int AddMeshInstance_Injected(IntPtr _unity_self, [In] ref RayTracingMeshInstanceConfig config, [In] ref Matrix4x4 matrix, Matrix4x4* prevMatrix, uint id);
}
