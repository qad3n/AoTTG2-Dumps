// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AnimationCurve
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
[Token(Token = "0x200008F")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/AnimationCurve.bindings.h")]
public class AnimationCurve : IEquatable<AnimationCurve>
{
	[Token(Token = "0x2000090")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x68BBFA0", Offset = "0x68BAFA0", VA = "0x68BBFA0")]
		public static AnimationCurve ConvertToManaged(IntPtr ptr)
		{
			return null;
		}

		[Token(Token = "0x6000224")]
		[Address(RVA = "0x68BC000", Offset = "0x68BB000", VA = "0x68BC000")]
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
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x68BADD0", Offset = "0x68B9DD0", VA = "0x68BADD0")]
		[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKeysArray", HasExplicitThis = true, IsThreadSafe = true)]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x68BAF30", Offset = "0x68B9F30", VA = "0x68BAF30")]
		[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SetKeysWithSpan", HasExplicitThis = true, IsThreadSafe = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x68BB450", Offset = "0x68BA450", VA = "0x68BB450")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x17000042")]
	public int length
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x68BB590", Offset = "0x68BA590", VA = "0x68BB590")]
		[UnityEngine.Bindings.NativeMethod("GetKeyCount", IsThreadSafe = true)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000043")]
	public WrapMode preWrapMode
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x68BBAE0", Offset = "0x68BAAE0", VA = "0x68BBAE0")]
		[UnityEngine.Bindings.NativeMethod("GetPreInfinity", IsThreadSafe = true)]
		get
		{
			return default(WrapMode);
		}
		[Token(Token = "0x6000207")]
		[Address(RVA = "0x68BBB70", Offset = "0x68BAB70", VA = "0x68BBB70")]
		[UnityEngine.Bindings.NativeMethod("SetPreInfinity", IsThreadSafe = true)]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public WrapMode postWrapMode
	{
		[Token(Token = "0x6000208")]
		[Address(RVA = "0x68BBC10", Offset = "0x68BAC10", VA = "0x68BBC10")]
		[UnityEngine.Bindings.NativeMethod("GetPostInfinity", IsThreadSafe = true)]
		get
		{
			return default(WrapMode);
		}
		[Token(Token = "0x6000209")]
		[Address(RVA = "0x68BBCA0", Offset = "0x68BACA0", VA = "0x68BBCA0")]
		[UnityEngine.Bindings.NativeMethod("SetPostInfinity", IsThreadSafe = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x68BA9F0", Offset = "0x68B99F0", VA = "0x68BA9F0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x68BAA20", Offset = "0x68B9A20", VA = "0x68BAA20")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Create", IsThreadSafe = true)]
	private static IntPtr Internal_Create(Keyframe[] keys)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x68BAB10", Offset = "0x68B9B10", VA = "0x68BAB10")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Equals", HasExplicitThis = true, IsThreadSafe = true)]
	private bool Internal_Equals(IntPtr other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x68BABB0", Offset = "0x68B9BB0", VA = "0x68BABB0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_CopyFrom", HasExplicitThis = true, IsThreadSafe = true)]
	private void Internal_CopyFrom(IntPtr other)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x68BAC50", Offset = "0x68B9C50", VA = "0x68BAC50", Slot = "1")]
	~AnimationCurve()
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x68BAD00", Offset = "0x68B9D00", VA = "0x68BAD00")]
	[UnityEngine.Bindings.ThreadSafe]
	public float Evaluate(float time)
	{
		return default(float);
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x68BB060", Offset = "0x68BA060", VA = "0x68BB060")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::AddKeySmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public int AddKey(float time, float value)
	{
		return default(int);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x68BB150", Offset = "0x68BA150", VA = "0x68BB150")]
	public int AddKey(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x68BB1C0", Offset = "0x68BA1C0", VA = "0x68BB1C0")]
	[UnityEngine.Bindings.NativeMethod("AddKey", IsThreadSafe = true)]
	private int AddKey_Internal(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x68BB270", Offset = "0x68BA270", VA = "0x68BB270")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::MoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public int MoveKey(int index, Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x68BB320", Offset = "0x68BA320", VA = "0x68BB320")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::ClearKeys", HasExplicitThis = true, IsThreadSafe = true)]
	public void ClearKeys()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x68BB3B0", Offset = "0x68BA3B0", VA = "0x68BB3B0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::RemoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public void RemoveKey(int index)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x68BB500", Offset = "0x68BA500", VA = "0x68BB500")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKey", HasExplicitThis = true, IsThreadSafe = true)]
	private Keyframe GetKey(int index)
	{
		return default(Keyframe);
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x68BB660", Offset = "0x68BA660", VA = "0x68BB660", Slot = "2")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetHashCode", HasExplicitThis = true, IsThreadSafe = true)]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x68BB6F0", Offset = "0x68BA6F0", VA = "0x68BB6F0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	[UnityEngine.Bindings.NativeThrows]
	public void SmoothTangents(int index, float weight)
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x68BB7B0", Offset = "0x68BA7B0", VA = "0x68BB7B0")]
	public static AnimationCurve Linear(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x68BB980", Offset = "0x68BA980", VA = "0x68BB980")]
	public static AnimationCurve EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x68BB950", Offset = "0x68BA950", VA = "0x68BB950")]
	public AnimationCurve(params Keyframe[] keys)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x68BBD40", Offset = "0x68BAD40", VA = "0x68BBD40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public AnimationCurve()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x68BBD60", Offset = "0x68BAD60", VA = "0x68BBD60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.ParticleSystemModule" })]
	internal AnimationCurve(IntPtr ptr, bool ownMemory)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x68BBD90", Offset = "0x68BAD90", VA = "0x68BBD90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x68BBE70", Offset = "0x68BAE70", VA = "0x68BBE70", Slot = "4")]
	public bool Equals(AnimationCurve other)
	{
		return default(bool);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x68BBF30", Offset = "0x68BAF30", VA = "0x68BBF30")]
	public void CopyFrom(AnimationCurve other)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x68BAAE0", Offset = "0x68B9AE0", VA = "0x68BAAE0")]
	private static extern IntPtr Internal_Create_Injected(ref ManagedSpanWrapper keys);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x68BAB70", Offset = "0x68B9B70", VA = "0x68BAB70")]
	private static extern bool Internal_Equals_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x68BAC10", Offset = "0x68B9C10", VA = "0x68BAC10")]
	private static extern void Internal_CopyFrom_Injected(IntPtr _unity_self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x68BAD80", Offset = "0x68B9D80", VA = "0x68BAD80")]
	private static extern float Evaluate_Injected(IntPtr _unity_self, float time);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x68BAEF0", Offset = "0x68B9EF0", VA = "0x68BAEF0")]
	private static extern void get_keys_Injected(IntPtr _unity_self, out BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x68BB020", Offset = "0x68BA020", VA = "0x68BB020")]
	private static extern void set_keys_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x68BB0F0", Offset = "0x68BA0F0", VA = "0x68BB0F0")]
	private static extern int AddKey_Injected(IntPtr _unity_self, float time, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000217")]
	[Address(RVA = "0x68BB230", Offset = "0x68BA230", VA = "0x68BB230")]
	private static extern int AddKey_Internal_Injected(IntPtr _unity_self, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000218")]
	[Address(RVA = "0x68BB2E0", Offset = "0x68BA2E0", VA = "0x68BB2E0")]
	private static extern int MoveKey_Injected(IntPtr _unity_self, int index, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000219")]
	[Address(RVA = "0x68BB380", Offset = "0x68BA380", VA = "0x68BB380")]
	private static extern void ClearKeys_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x68BB410", Offset = "0x68BA410", VA = "0x68BB410")]
	private static extern void RemoveKey_Injected(IntPtr _unity_self, int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021B")]
	[Address(RVA = "0x68BB5F0", Offset = "0x68BA5F0", VA = "0x68BB5F0")]
	private static extern int get_length_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x68BB620", Offset = "0x68BA620", VA = "0x68BB620")]
	private static extern void GetKey_Injected(IntPtr _unity_self, int index, out Keyframe ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x68BB6C0", Offset = "0x68BA6C0", VA = "0x68BB6C0")]
	private static extern int GetHashCode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x68BB770", Offset = "0x68BA770", VA = "0x68BB770")]
	private static extern void SmoothTangents_Injected(IntPtr _unity_self, int index, float weight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x68BBB40", Offset = "0x68BAB40", VA = "0x68BBB40")]
	private static extern WrapMode get_preWrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000220")]
	[Address(RVA = "0x68BBBD0", Offset = "0x68BABD0", VA = "0x68BBBD0")]
	private static extern void set_preWrapMode_Injected(IntPtr _unity_self, WrapMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000221")]
	[Address(RVA = "0x68BBC70", Offset = "0x68BAC70", VA = "0x68BBC70")]
	private static extern WrapMode get_postWrapMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000222")]
	[Address(RVA = "0x68BBD00", Offset = "0x68BAD00", VA = "0x68BBD00")]
	private static extern void set_postWrapMode_Injected(IntPtr _unity_self, WrapMode value);
}
