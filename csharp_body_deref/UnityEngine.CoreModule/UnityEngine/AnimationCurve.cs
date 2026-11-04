// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationCurve
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
[Token(Token = "0x200008F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/AnimationCurve.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AnimationCurve : IEquatable<AnimationCurve>
{
	[Token(Token = "0x2000090")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x2EBBD30", Offset = "0x2EBA330", VA = "0x182EBBD30")]
		public static AnimationCurve ConvertToManaged(IntPtr ptr)
		{
			return null;
		}

		[Token(Token = "0x6000222")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(AnimationCurve animationCurve)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool m_RequiresNativeCleanup;

	[Token(Token = "0x17000040")]
	public Keyframe[] keys
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x2EB9080", Offset = "0x2EB7680", VA = "0x182EB9080")]
		[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKeysArray", HasExplicitThis = true, IsThreadSafe = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x2EB93A0", Offset = "0x2EB79A0", VA = "0x182EB93A0")]
		[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SetKeysWithSpan", HasExplicitThis = true, IsThreadSafe = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x2EB8F90", Offset = "0x2EB7590", VA = "0x182EB8F90")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x17000042")]
	public int length
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x2EB91B0", Offset = "0x2EB77B0", VA = "0x182EB91B0")]
		[UnityEngine.Bindings.NativeMethod("GetKeyCount", IsThreadSafe = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000043")]
	public WrapMode preWrapMode
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x2EB92F0", Offset = "0x2EB78F0", VA = "0x182EB92F0")]
		[UnityEngine.Bindings.NativeMethod("GetPreInfinity", IsThreadSafe = true)]
		get
		{
			return default(WrapMode);
		}
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x2EB9580", Offset = "0x2EB7B80", VA = "0x182EB9580")]
		[UnityEngine.Bindings.NativeMethod("SetPreInfinity", IsThreadSafe = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public WrapMode postWrapMode
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x2EB9250", Offset = "0x2EB7850", VA = "0x182EB9250")]
		[UnityEngine.Bindings.NativeMethod("GetPostInfinity", IsThreadSafe = true)]
		get
		{
			return default(WrapMode);
		}
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x2EB94E0", Offset = "0x2EB7AE0", VA = "0x182EB94E0")]
		[UnityEngine.Bindings.NativeMethod("SetPostInfinity", IsThreadSafe = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x2EB89C0", Offset = "0x2EB6FC0", VA = "0x182EB89C0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x2EB8900", Offset = "0x2EB6F00", VA = "0x182EB8900")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Create", IsThreadSafe = true)]
	private static IntPtr Internal_Create(Keyframe[] keys)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x2EB8A50", Offset = "0x2EB7050", VA = "0x182EB8A50")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Equals", HasExplicitThis = true, IsThreadSafe = true)]
	private bool Internal_Equals(IntPtr other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x2EB8860", Offset = "0x2EB6E60", VA = "0x182EB8860")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_CopyFrom", HasExplicitThis = true, IsThreadSafe = true)]
	private void Internal_CopyFrom(IntPtr other)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2EB8620", Offset = "0x2EB6C20", VA = "0x182EB8620", Slot = "1")]
	~AnimationCurve()
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x2EB85B0", Offset = "0x2EB6BB0", VA = "0x182EB85B0")]
	[UnityEngine.Bindings.ThreadSafe]
	public float Evaluate(float time)
	{
		return default(float);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2EB7FD0", Offset = "0x2EB65D0", VA = "0x182EB7FD0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::AddKeySmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public int AddKey(float time, float value)
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x2EB7F60", Offset = "0x2EB6560", VA = "0x182EB7F60")]
	public int AddKey(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x2EB7F00", Offset = "0x2EB6500", VA = "0x182EB7F00")]
	[UnityEngine.Bindings.NativeMethod("AddKey", IsThreadSafe = true)]
	private int AddKey_Internal(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x2EB8C90", Offset = "0x2EB7290", VA = "0x182EB8C90")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::MoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public int MoveKey(int index, Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x2EB8090", Offset = "0x2EB6690", VA = "0x182EB8090")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::ClearKeys", HasExplicitThis = true, IsThreadSafe = true)]
	public void ClearKeys()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x2EB8D40", Offset = "0x2EB7340", VA = "0x182EB8D40")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::RemoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeThrows]
	public void RemoveKey(int index)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x2EB8790", Offset = "0x2EB6D90", VA = "0x182EB8790")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKey", HasExplicitThis = true, IsThreadSafe = true)]
	private Keyframe GetKey(int index)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x2EB86E0", Offset = "0x2EB6CE0", VA = "0x182EB86E0", Slot = "2")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetHashCode", HasExplicitThis = true, IsThreadSafe = true)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x2EB8DF0", Offset = "0x2EB73F0", VA = "0x182EB8DF0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public void SmoothTangents(int index, float weight)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x2EB8AB0", Offset = "0x2EB70B0", VA = "0x182EB8AB0")]
	public static AnimationCurve Linear(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x2EB8160", Offset = "0x2EB6760", VA = "0x182EB8160")]
	public static AnimationCurve EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x2EB8F50", Offset = "0x2EB7550", VA = "0x182EB8F50")]
	public AnimationCurve(params Keyframe[] keys)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x2EB8E60", Offset = "0x2EB7460", VA = "0x182EB8E60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public AnimationCurve()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x2EB8F10", Offset = "0x2EB7510", VA = "0x182EB8F10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal AnimationCurve(IntPtr ptr, bool ownMemory)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x2EB83B0", Offset = "0x2EB69B0", VA = "0x182EB83B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x2EB82C0", Offset = "0x2EB68C0", VA = "0x182EB82C0", Slot = "4")]
	public bool Equals(AnimationCurve other)
	{
		return default(bool);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x2EB80F0", Offset = "0x2EB66F0", VA = "0x182EB80F0")]
	public void CopyFrom(AnimationCurve other)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x2EB88C0", Offset = "0x2EB6EC0", VA = "0x182EB88C0")]
	private static extern IntPtr Internal_Create_Injected(ref ManagedSpanWrapper keys);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x2EB8A00", Offset = "0x2EB7000", VA = "0x182EB8A00")]
	private static extern bool Internal_Equals_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x2EB8810", Offset = "0x2EB6E10", VA = "0x182EB8810")]
	private static extern void Internal_CopyFrom_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x2EB8560", Offset = "0x2EB6B60", VA = "0x182EB8560")]
	private static extern float Evaluate_Injected(IntPtr _unity_self, float time);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x2EB9030", Offset = "0x2EB7630", VA = "0x182EB9030")]
	private static extern void get_keys_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x2EB9350", Offset = "0x2EB7950", VA = "0x182EB9350")]
	private static extern void set_keys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x2EB7E50", Offset = "0x2EB6450", VA = "0x182EB7E50")]
	private static extern int AddKey_Injected(IntPtr _unity_self, float time, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x2EB7EB0", Offset = "0x2EB64B0", VA = "0x182EB7EB0")]
	private static extern int AddKey_Internal_Injected(IntPtr _unity_self, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x2EB8C40", Offset = "0x2EB7240", VA = "0x182EB8C40")]
	private static extern int MoveKey_Injected(IntPtr _unity_self, int index, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x2EB8050", Offset = "0x2EB6650", VA = "0x182EB8050")]
	private static extern void ClearKeys_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x2EB8D00", Offset = "0x2EB7300", VA = "0x182EB8D00")]
	private static extern void RemoveKey_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x2EB9170", Offset = "0x2EB7770", VA = "0x182EB9170")]
	private static extern int get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x2EB8740", Offset = "0x2EB6D40", VA = "0x182EB8740")]
	private static extern void GetKey_Injected(IntPtr _unity_self, int index, out Keyframe ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x2EB86A0", Offset = "0x2EB6CA0", VA = "0x182EB86A0")]
	private static extern int GetHashCode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x2EB8DA0", Offset = "0x2EB73A0", VA = "0x182EB8DA0")]
	private static extern void SmoothTangents_Injected(IntPtr _unity_self, int index, float weight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x2EB92B0", Offset = "0x2EB78B0", VA = "0x182EB92B0")]
	private static extern WrapMode get_preWrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x2EB9540", Offset = "0x2EB7B40", VA = "0x182EB9540")]
	private static extern void set_preWrapMode_Injected(IntPtr _unity_self, WrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x2EB9210", Offset = "0x2EB7810", VA = "0x182EB9210")]
	private static extern WrapMode get_postWrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x2EB94A0", Offset = "0x2EB7AA0", VA = "0x182EB94A0")]
	private static extern void set_postWrapMode_Injected(IntPtr _unity_self, WrapMode value);
}
