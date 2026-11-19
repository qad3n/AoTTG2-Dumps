// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CullingGroup
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
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x68C28F0", Offset = "0x68C18F0", VA = "0x68C28F0")]
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

	[Token(Token = "0x1700007C")]
	public Camera targetCamera
	{
		[Token(Token = "0x60002F2")]
		[Address(RVA = "0x68C2180", Offset = "0x68C1180", VA = "0x68C2180")]
		set
		{
		}
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x68C1EF0", Offset = "0x68C0EF0", VA = "0x68C1EF0")]
	public CullingGroup()
	{
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x68C1F70", Offset = "0x68C0F70", VA = "0x68C1F70", Slot = "1")]
	~CullingGroup()
	{
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x68C2080", Offset = "0x68C1080", VA = "0x68C2080")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::Dispose", HasExplicitThis = true)]
	private void DisposeInternal()
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x68C2110", Offset = "0x68C1110", VA = "0x68C2110", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x68C2280", Offset = "0x68C1280", VA = "0x68C2280")]
	public void SetBoundingSpheres([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] BoundingSphere[] array)
	{
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x68C2320", Offset = "0x68C1320", VA = "0x68C2320")]
	public void SetBoundingSphereCount(int count)
	{
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x68C23C0", Offset = "0x68C13C0", VA = "0x68C23C0")]
	public int QueryIndices(bool visible, int[] result, int firstIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x68C23E0", Offset = "0x68C13E0", VA = "0x68C23E0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::QueryIndices", HasExplicitThis = true)]
	private int QueryIndices(bool visible, int distanceIndex, CullingQueryOptions options, int[] result, int firstIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x68C2560", Offset = "0x68C1560", VA = "0x68C2560")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::SetBoundingDistances", HasExplicitThis = true)]
	public void SetBoundingDistances(float[] distances)
	{
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x68C2690", Offset = "0x68C1690", VA = "0x68C2690")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::SetDistanceReferencePoint", HasExplicitThis = true)]
	private void SetDistanceReferencePoint_InternalVector3(Vector3 point)
	{
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x68C2740", Offset = "0x68C1740", VA = "0x68C2740")]
	public void SetDistanceReferencePoint(Vector3 point)
	{
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x68C27B0", Offset = "0x68C17B0", VA = "0x68C27B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendEvents(CullingGroup cullingGroup, IntPtr eventsPtr, int count)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x68C1F40", Offset = "0x68C0F40", VA = "0x68C1F40")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::Init")]
	private static extern IntPtr Init(object scripting);

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x68C2020", Offset = "0x68C1020", VA = "0x68C2020")]
	[UnityEngine.Bindings.FreeFunction("CullingGroup_Bindings::FinalizerFailure", HasExplicitThis = true, IsThreadSafe = true)]
	private void FinalizerFailure()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x68C20E0", Offset = "0x68C10E0", VA = "0x68C20E0")]
	private static extern void DisposeInternal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x68C2240", Offset = "0x68C1240", VA = "0x68C2240")]
	private static extern void set_targetCamera_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x68C22E0", Offset = "0x68C12E0", VA = "0x68C22E0")]
	private static extern void SetBoundingSpheres_Injected(IntPtr _unity_self, BoundingSphere[] array);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000300")]
	[Address(RVA = "0x68C2380", Offset = "0x68C1380", VA = "0x68C2380")]
	private static extern void SetBoundingSphereCount_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000301")]
	[Address(RVA = "0x68C2500", Offset = "0x68C1500", VA = "0x68C2500")]
	private static extern int QueryIndices_Injected(IntPtr _unity_self, bool visible, int distanceIndex, CullingQueryOptions options, ref ManagedSpanWrapper result, int firstIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000302")]
	[Address(RVA = "0x68C2650", Offset = "0x68C1650", VA = "0x68C2650")]
	private static extern void SetBoundingDistances_Injected(IntPtr _unity_self, ref ManagedSpanWrapper distances);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000303")]
	[Address(RVA = "0x68C2700", Offset = "0x68C1700", VA = "0x68C2700")]
	private static extern void SetDistanceReferencePoint_InternalVector3_Injected(IntPtr _unity_self, [In] ref Vector3 point);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000304")]
	[Address(RVA = "0x68C2800", Offset = "0x68C1800", VA = "0x68C2800")]
	private static extern void FinalizerFailure_Injected(IntPtr _unity_self);
}
