// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RayTracingAccelerationStructure
// Update status: CHANGED in this game update
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
		[Token(Token = "0x40009B7")]
		Nothing = 0,
		[Token(Token = "0x40009B8")]
		Static = 2,
		[Token(Token = "0x40009B9")]
		DynamicTransform = 4,
		[Token(Token = "0x40009BA")]
		DynamicGeometry = 8,
		[Token(Token = "0x40009BB")]
		DynamicGeometryManualUpdate = 0x10,
		[Token(Token = "0x40009BC")]
		Everything = Static | DynamicTransform | DynamicGeometry | DynamicGeometryManualUpdate
	}

	[Token(Token = "0x200035C")]
	public enum ManagementMode
	{
		[Token(Token = "0x40009BE")]
		Manual,
		[Token(Token = "0x40009BF")]
		Automatic
	}

	[Token(Token = "0x200035D")]
	public struct BuildSettings
	{
		[Token(Token = "0x17000314")]
		public RayTracingAccelerationStructureBuildFlags buildFlags
		{
			[Token(Token = "0x6001304")]
			[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000315")]
		public Vector3 relativeOrigin
		{
			[Token(Token = "0x6001305")]
			[Address(RVA = "0x2F2F750", Offset = "0x2F2DD50", VA = "0x182F2F750")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6001306")]
		[Address(RVA = "0x2F2F700", Offset = "0x2F2DD00", VA = "0x182F2F700")]
		public BuildSettings()
		{
		}
	}

	[Token(Token = "0x200035E")]
	public struct Settings
	{
		[Token(Token = "0x40009C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ManagementMode managementMode;

		[Token(Token = "0x40009C3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public RayTracingModeMask rayTracingModeMask;

		[Token(Token = "0x40009C4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int layerMask;

		[Token(Token = "0x17000316")]
		public RayTracingAccelerationStructureBuildFlags buildFlagsStaticGeometries
		{
			[Token(Token = "0x6001307")]
			[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000317")]
		public RayTracingAccelerationStructureBuildFlags buildFlagsDynamicGeometries
		{
			[Token(Token = "0x6001308")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000318")]
		public bool enableCompaction
		{
			[Token(Token = "0x6001309")]
			[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600130A")]
		[Address(RVA = "0x2F57860", Offset = "0x2F55E60", VA = "0x182F57860")]
		public Settings()
		{
		}
	}

	[Token(Token = "0x200035F")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600130B")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(RayTracingAccelerationStructure rayTracingAccelerationStructure)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40009B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x2F51710", Offset = "0x2F4FD10", VA = "0x182F51710", Slot = "1")]
	~RayTracingAccelerationStructure()
	{
	}

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x2F51680", Offset = "0x2F4FC80", VA = "0x182F51680", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x2F51610", Offset = "0x2F4FC10", VA = "0x182F51610")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x2F51AC0", Offset = "0x2F500C0", VA = "0x182F51AC0")]
	public RayTracingAccelerationStructure(Settings settings)
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x2F50F70", Offset = "0x2F4F570", VA = "0x182F50F70")]
	public int AddInstance(in RayTracingMeshInstanceConfig config, Matrix4x4 matrix, [Optional][DefaultValue("null")] Matrix4x4? prevMatrix, uint id = 4294967295u)
	{
		return default(int);
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x2F51790", Offset = "0x2F4FD90", VA = "0x182F51790")]
	public void RemoveInstance(int handle)
	{
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x2F51A30", Offset = "0x2F50030", VA = "0x182F51A30")]
	public void UpdateInstanceTransform(int handle, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x2F51840", Offset = "0x2F4FE40", VA = "0x182F51840")]
	public void UpdateInstanceID(int handle, uint instanceID)
	{
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x2F51900", Offset = "0x2F4FF00", VA = "0x182F51900")]
	public void UpdateInstanceMask(int handle, uint mask)
	{
	}

	[Token(Token = "0x60012F4")]
	[Address(RVA = "0x2F514B0", Offset = "0x2F4FAB0", VA = "0x182F514B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::ClearInstances", HasExplicitThis = true)]
	public void ClearInstances()
	{
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x2F51550", Offset = "0x2F4FB50", VA = "0x182F51550")]
	[UnityEngine.Bindings.FreeFunction("RayTracingAccelerationStructure_Bindings::Create")]
	private static IntPtr Create(Settings desc)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x2F515D0", Offset = "0x2F4FBD0", VA = "0x182F515D0")]
	[UnityEngine.Bindings.FreeFunction("RayTracingAccelerationStructure_Bindings::Destroy")]
	private static void Destroy(RayTracingAccelerationStructure accelStruct)
	{
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x2F51790", Offset = "0x2F4FD90", VA = "0x182F51790")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::RemoveInstance", HasExplicitThis = true)]
	private void RemoveInstance_InstanceID(int instanceID)
	{
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x2F519C0", Offset = "0x2F4FFC0", VA = "0x182F519C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceTransform", HasExplicitThis = true)]
	private void UpdateInstanceTransform_Handle(int handle, Matrix4x4 matrix)
	{
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x2F51900", Offset = "0x2F4FF00", VA = "0x182F51900")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceMask", HasExplicitThis = true)]
	private void UpdateInstanceMask_Handle(int handle, uint mask)
	{
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x2F51840", Offset = "0x2F4FE40", VA = "0x182F51840")]
	[UnityEngine.Bindings.FreeFunction(Name = "RayTracingAccelerationStructure_Bindings::UpdateInstanceID", HasExplicitThis = true)]
	private void UpdateInstanceID_Handle(int handle, uint id)
	{
	}

	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x2F513E0", Offset = "0x2F4F9E0", VA = "0x182F513E0")]
	[UnityEngine.Bindings.FreeFunction("RayTracingAccelerationStructure_Bindings::AddMeshInstance", HasExplicitThis = true)]
	private unsafe int AddMeshInstance(RayTracingMeshInstanceConfig config, Matrix4x4 matrix, Matrix4x4* prevMatrix, uint id = 4294967295u)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x2F51470", Offset = "0x2F4FA70", VA = "0x182F51470")]
	private static extern void ClearInstances_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x2F51510", Offset = "0x2F4FB10", VA = "0x182F51510")]
	private static extern IntPtr Create_Injected([In] ref Settings desc);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x2F51590", Offset = "0x2F4FB90", VA = "0x182F51590")]
	private static extern void Destroy_Injected(IntPtr accelStruct);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x2F51750", Offset = "0x2F4FD50", VA = "0x182F51750")]
	private static extern void RemoveInstance_InstanceID_Injected(IntPtr _unity_self, int instanceID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001300")]
	[Address(RVA = "0x2F51970", Offset = "0x2F4FF70", VA = "0x182F51970")]
	private static extern void UpdateInstanceTransform_Handle_Injected(IntPtr _unity_self, int handle, [In] ref Matrix4x4 matrix);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x2F518B0", Offset = "0x2F4FEB0", VA = "0x182F518B0")]
	private static extern void UpdateInstanceMask_Handle_Injected(IntPtr _unity_self, int handle, uint mask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x2F517F0", Offset = "0x2F4FDF0", VA = "0x182F517F0")]
	private static extern void UpdateInstanceID_Handle_Injected(IntPtr _unity_self, int handle, uint id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x2F51390", Offset = "0x2F4F990", VA = "0x182F51390")]
	private unsafe static extern int AddMeshInstance_Injected(IntPtr _unity_self, [In] ref RayTracingMeshInstanceConfig config, [In] ref Matrix4x4 matrix, Matrix4x4* prevMatrix, uint id);
}
