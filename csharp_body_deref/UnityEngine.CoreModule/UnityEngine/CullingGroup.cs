// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CullingGroup
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
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x20000A7")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Camera/CullingGroup.bindings.h")]
public class CullingGroup : IDisposable
{
	[Token(Token = "0x20000A8")]
	public delegate void StateChanged(CullingGroupEvent sphere);

	[Token(Token = "0x20000A9")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(CullingGroup cullingGroup)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x40001C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40001C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private StateChanged m_OnStateChanged;

	[Token(Token = "0x1700007B")]
	public Camera targetCamera
	{
		[Token(Token = "0x60002EE")]
		[Address(RVA = "0x2EC19F0", Offset = "0x2EBFFF0", VA = "0x182EC19F0")]
		set
		{
		}
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x2EC1940", Offset = "0x2EBFF40", VA = "0x182EC1940")]
	public CullingGroup()
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x2EC1100", Offset = "0x2EBF700", VA = "0x182EC1100", Slot = "1")]
	~CullingGroup()
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x2EC1040", Offset = "0x2EBF640", VA = "0x182EC1040")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::Dispose", HasExplicitThis = true)]
	private void DisposeInternal()
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x2EC10A0", Offset = "0x2EBF6A0", VA = "0x182EC10A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x2EC17C0", Offset = "0x2EBFDC0", VA = "0x182EC17C0")]
	public void SetBoundingSpheres([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] BoundingSphere[] array)
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x2EC1710", Offset = "0x2EBFD10", VA = "0x182EC1710")]
	public void SetBoundingSphereCount(int count)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x2EC1400", Offset = "0x2EBFA00", VA = "0x182EC1400")]
	public int QueryIndices(bool visible, int[] result, int firstIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x2EC12D0", Offset = "0x2EBF8D0", VA = "0x182EC12D0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::QueryIndices", HasExplicitThis = true)]
	private int QueryIndices(bool visible, int distanceIndex, CullingQueryOptions options, int[] result, int firstIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x2EC15D0", Offset = "0x2EBFBD0", VA = "0x182EC15D0")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::SetBoundingDistances", HasExplicitThis = true)]
	public void SetBoundingDistances(float[] distances)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x2EC1870", Offset = "0x2EBFE70", VA = "0x182EC1870")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::SetDistanceReferencePoint", HasExplicitThis = true)]
	private void SetDistanceReferencePoint_InternalVector3(Vector3 point)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x2EC18D0", Offset = "0x2EBFED0", VA = "0x182EC18D0")]
	public void SetDistanceReferencePoint(Vector3 point)
	{
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x2EC1520", Offset = "0x2EBFB20", VA = "0x182EC1520")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendEvents(CullingGroup cullingGroup, IntPtr eventsPtr, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x2EC1240", Offset = "0x2EBF840", VA = "0x182EC1240")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::Init")]
	private static extern IntPtr Init(object scripting);

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x2EC11E0", Offset = "0x2EBF7E0", VA = "0x182EC11E0")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::FinalizerFailure", HasExplicitThis = true, IsThreadSafe = true)]
	private void FinalizerFailure()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x2EC1000", Offset = "0x2EBF600", VA = "0x182EC1000")]
	private static extern void DisposeInternal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x2EC19A0", Offset = "0x2EBFFA0", VA = "0x182EC19A0")]
	private static extern void set_targetCamera_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x2EC1770", Offset = "0x2EBFD70", VA = "0x182EC1770")]
	private static extern void SetBoundingSpheres_Injected(IntPtr _unity_self, BoundingSphere[] array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x2EC16D0", Offset = "0x2EBFCD0", VA = "0x182EC16D0")]
	private static extern void SetBoundingSphereCount_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x2EC1280", Offset = "0x2EBF880", VA = "0x182EC1280")]
	private static extern int QueryIndices_Injected(IntPtr _unity_self, bool visible, int distanceIndex, CullingQueryOptions options, ref ManagedSpanWrapper result, int firstIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x2EC1580", Offset = "0x2EBFB80", VA = "0x182EC1580")]
	private static extern void SetBoundingDistances_Injected(IntPtr _unity_self, ref ManagedSpanWrapper distances);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x2EC1820", Offset = "0x2EBFE20", VA = "0x182EC1820")]
	private static extern void SetDistanceReferencePoint_InternalVector3_Injected(IntPtr _unity_self, [In] ref Vector3 point);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000300")]
	[Address(RVA = "0x2EC11A0", Offset = "0x2EBF7A0", VA = "0x182EC11A0")]
	private static extern void FinalizerFailure_Injected(IntPtr _unity_self);
}
