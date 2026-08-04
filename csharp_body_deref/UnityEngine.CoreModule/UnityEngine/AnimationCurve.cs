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
[Token(Token = "0x2000074")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/AnimationCurve.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AnimationCurve : IEquatable<AnimationCurve>
{
	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000029")]
	public Keyframe[] keys
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x4DAE390", Offset = "0x4DAE390", VA = "0x4DAE390")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x4DAE3F0", Offset = "0x4DAE3F0", VA = "0x4DAE3F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x4DAE6E0", Offset = "0x4DAE6E0", VA = "0x4DAE6E0")]
		get
		{
			return default(Keyframe);
		}
	}

	[Token(Token = "0x1700002B")]
	public extern int length
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x4DAE7E0", Offset = "0x4DAE7E0", VA = "0x4DAE7E0")]
		[UnityEngine.Bindings.NativeMethod("GetKeyCount", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700002C")]
	public extern WrapMode preWrapMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4DAEC80", Offset = "0x4DAEC80", VA = "0x4DAEC80")]
		[UnityEngine.Bindings.NativeMethod("GetPreInfinity", IsThreadSafe = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x4DAECB0", Offset = "0x4DAECB0", VA = "0x4DAECB0")]
		[UnityEngine.Bindings.NativeMethod("SetPreInfinity", IsThreadSafe = true)]
		set;
	}

	[Token(Token = "0x1700002D")]
	public extern WrapMode postWrapMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x4DAECF0", Offset = "0x4DAECF0", VA = "0x4DAECF0")]
		[UnityEngine.Bindings.NativeMethod("GetPostInfinity", IsThreadSafe = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x4DAED20", Offset = "0x4DAED20", VA = "0x4DAED20")]
		[UnityEngine.Bindings.NativeMethod("SetPostInfinity", IsThreadSafe = true)]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4DAE0E0", Offset = "0x4DAE0E0", VA = "0x4DAE0E0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4DAE110", Offset = "0x4DAE110", VA = "0x4DAE110")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Create", IsThreadSafe = true)]
	private static IntPtr Internal_Create(Keyframe[] keys)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4DAE200", Offset = "0x4DAE200", VA = "0x4DAE200")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Equals", HasExplicitThis = true, IsThreadSafe = true)]
	private extern bool Internal_Equals(IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4DAE240", Offset = "0x4DAE240", VA = "0x4DAE240")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_CopyFrom", HasExplicitThis = true, IsThreadSafe = true)]
	private extern void Internal_CopyFrom(IntPtr other);

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4DAE280", Offset = "0x4DAE280", VA = "0x4DAE280", Slot = "1")]
	~AnimationCurve()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4DAE340", Offset = "0x4DAE340", VA = "0x4DAE340")]
	[UnityEngine.Bindings.ThreadSafe]
	public extern float Evaluate(float time);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4DAE4C0", Offset = "0x4DAE4C0", VA = "0x4DAE4C0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::AddKeySmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public extern int AddKey(float time, float value);

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4DAE520", Offset = "0x4DAE520", VA = "0x4DAE520")]
	public int AddKey(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4DAE570", Offset = "0x4DAE570", VA = "0x4DAE570")]
	[UnityEngine.Bindings.NativeMethod("AddKey", IsThreadSafe = true)]
	private int AddKey_Internal(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4DAE5F0", Offset = "0x4DAE5F0", VA = "0x4DAE5F0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::MoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public int MoveKey(int index, Keyframe key)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4DAE670", Offset = "0x4DAE670", VA = "0x4DAE670")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::ClearKeys", HasExplicitThis = true, IsThreadSafe = true)]
	public extern void ClearKeys();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4DAE6A0", Offset = "0x4DAE6A0", VA = "0x4DAE6A0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::RemoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public extern void RemoveKey(int index);

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4DAE400", Offset = "0x4DAE400", VA = "0x4DAE400")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SetKeys", HasExplicitThis = true, IsThreadSafe = true)]
	private void SetKeys(Keyframe[] keys)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4DAE770", Offset = "0x4DAE770", VA = "0x4DAE770")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKey", HasExplicitThis = true, IsThreadSafe = true)]
	private Keyframe GetKey(int index)
	{
		return default(Keyframe);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4DAE3C0", Offset = "0x4DAE3C0", VA = "0x4DAE3C0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKeys", HasExplicitThis = true, IsThreadSafe = true)]
	private extern Keyframe[] GetKeys();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4DAE890", Offset = "0x4DAE890", VA = "0x4DAE890", Slot = "2")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetHashCode", HasExplicitThis = true, IsThreadSafe = true)]
	public override extern int GetHashCode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4DAE8C0", Offset = "0x4DAE8C0", VA = "0x4DAE8C0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public extern void SmoothTangents(int index, float weight);

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4DAE900", Offset = "0x4DAE900", VA = "0x4DAE900")]
	public static AnimationCurve Linear(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4DAEAF0", Offset = "0x4DAEAF0", VA = "0x4DAEAF0")]
	public static AnimationCurve EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4DAEAC0", Offset = "0x4DAEAC0", VA = "0x4DAEAC0")]
	public AnimationCurve(params Keyframe[] keys)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4DAED60", Offset = "0x4DAED60", VA = "0x4DAED60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public AnimationCurve()
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4DAED80", Offset = "0x4DAED80", VA = "0x4DAED80", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4DAEEC0", Offset = "0x4DAEEC0", VA = "0x4DAEEC0", Slot = "4")]
	public bool Equals(AnimationCurve other)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4DAEF50", Offset = "0x4DAEF50", VA = "0x4DAEF50")]
	public void CopyFrom(AnimationCurve other)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4DAE1D0", Offset = "0x4DAE1D0", VA = "0x4DAE1D0")]
	private static extern IntPtr Internal_Create_Injected(ref ManagedSpanWrapper keys);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4DAE5B0", Offset = "0x4DAE5B0", VA = "0x4DAE5B0")]
	private static extern int AddKey_Internal_Injected(AnimationCurve _unity_self, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4DAE630", Offset = "0x4DAE630", VA = "0x4DAE630")]
	private static extern int MoveKey_Injected(AnimationCurve _unity_self, int index, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4DAE810", Offset = "0x4DAE810", VA = "0x4DAE810")]
	private static extern void SetKeys_Injected(AnimationCurve _unity_self, ref ManagedSpanWrapper keys);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4DAE850", Offset = "0x4DAE850", VA = "0x4DAE850")]
	private static extern void GetKey_Injected(AnimationCurve _unity_self, int index, out Keyframe ret);
}
