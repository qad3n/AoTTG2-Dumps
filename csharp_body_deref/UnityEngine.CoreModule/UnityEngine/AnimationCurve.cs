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
		[Address(RVA = "0x4A86B70", Offset = "0x4A86B70", VA = "0x4A86B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x4A86BD0", Offset = "0x4A86BD0", VA = "0x4A86BD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public Keyframe this[int index]
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x4A86EC0", Offset = "0x4A86EC0", VA = "0x4A86EC0")]
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
		[Address(RVA = "0x4A86FC0", Offset = "0x4A86FC0", VA = "0x4A86FC0")]
		[UnityEngine.Bindings.NativeMethod("GetKeyCount", IsThreadSafe = true)]
		get;
	}

	[Token(Token = "0x1700002C")]
	public extern WrapMode preWrapMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4A87460", Offset = "0x4A87460", VA = "0x4A87460")]
		[UnityEngine.Bindings.NativeMethod("GetPreInfinity", IsThreadSafe = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x4A87490", Offset = "0x4A87490", VA = "0x4A87490")]
		[UnityEngine.Bindings.NativeMethod("SetPreInfinity", IsThreadSafe = true)]
		set;
	}

	[Token(Token = "0x1700002D")]
	public extern WrapMode postWrapMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x4A874D0", Offset = "0x4A874D0", VA = "0x4A874D0")]
		[UnityEngine.Bindings.NativeMethod("GetPostInfinity", IsThreadSafe = true)]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x4A87500", Offset = "0x4A87500", VA = "0x4A87500")]
		[UnityEngine.Bindings.NativeMethod("SetPostInfinity", IsThreadSafe = true)]
		set;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4A868C0", Offset = "0x4A868C0", VA = "0x4A868C0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4A868F0", Offset = "0x4A868F0", VA = "0x4A868F0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Create", IsThreadSafe = true)]
	private static IntPtr Internal_Create(Keyframe[] keys)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4A869E0", Offset = "0x4A869E0", VA = "0x4A869E0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_Equals", HasExplicitThis = true, IsThreadSafe = true)]
	private extern bool Internal_Equals(IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4A86A20", Offset = "0x4A86A20", VA = "0x4A86A20")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::Internal_CopyFrom", HasExplicitThis = true, IsThreadSafe = true)]
	private extern void Internal_CopyFrom(IntPtr other);

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4A86A60", Offset = "0x4A86A60", VA = "0x4A86A60", Slot = "1")]
	~AnimationCurve()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4A86B20", Offset = "0x4A86B20", VA = "0x4A86B20")]
	[UnityEngine.Bindings.ThreadSafe]
	public extern float Evaluate(float time);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4A86CA0", Offset = "0x4A86CA0", VA = "0x4A86CA0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::AddKeySmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public extern int AddKey(float time, float value);

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4A86D00", Offset = "0x4A86D00", VA = "0x4A86D00")]
	public int AddKey(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4A86D50", Offset = "0x4A86D50", VA = "0x4A86D50")]
	[UnityEngine.Bindings.NativeMethod("AddKey", IsThreadSafe = true)]
	private int AddKey_Internal(Keyframe key)
	{
		return default(int);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4A86DD0", Offset = "0x4A86DD0", VA = "0x4A86DD0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::MoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public int MoveKey(int index, Keyframe key)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4A86E50", Offset = "0x4A86E50", VA = "0x4A86E50")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::ClearKeys", HasExplicitThis = true, IsThreadSafe = true)]
	public extern void ClearKeys();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4A86E80", Offset = "0x4A86E80", VA = "0x4A86E80")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::RemoveKey", HasExplicitThis = true, IsThreadSafe = true)]
	public extern void RemoveKey(int index);

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4A86BE0", Offset = "0x4A86BE0", VA = "0x4A86BE0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SetKeys", HasExplicitThis = true, IsThreadSafe = true)]
	private void SetKeys(Keyframe[] keys)
	{
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4A86F50", Offset = "0x4A86F50", VA = "0x4A86F50")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKey", HasExplicitThis = true, IsThreadSafe = true)]
	private Keyframe GetKey(int index)
	{
		return default(Keyframe);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4A86BA0", Offset = "0x4A86BA0", VA = "0x4A86BA0")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetKeys", HasExplicitThis = true, IsThreadSafe = true)]
	private extern Keyframe[] GetKeys();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4A87070", Offset = "0x4A87070", VA = "0x4A87070", Slot = "2")]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::GetHashCode", HasExplicitThis = true, IsThreadSafe = true)]
	public override extern int GetHashCode();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4A870A0", Offset = "0x4A870A0", VA = "0x4A870A0")]
	[UnityEngine.Bindings.NativeThrows]
	[UnityEngine.Bindings.FreeFunction("AnimationCurveBindings::SmoothTangents", HasExplicitThis = true, IsThreadSafe = true)]
	public extern void SmoothTangents(int index, float weight);

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4A870E0", Offset = "0x4A870E0", VA = "0x4A870E0")]
	public static AnimationCurve Linear(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4A872D0", Offset = "0x4A872D0", VA = "0x4A872D0")]
	public static AnimationCurve EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4A872A0", Offset = "0x4A872A0", VA = "0x4A872A0")]
	public AnimationCurve(params Keyframe[] keys)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4A87540", Offset = "0x4A87540", VA = "0x4A87540")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public AnimationCurve()
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4A87560", Offset = "0x4A87560", VA = "0x4A87560", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4A876A0", Offset = "0x4A876A0", VA = "0x4A876A0", Slot = "4")]
	public bool Equals(AnimationCurve other)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4A87730", Offset = "0x4A87730", VA = "0x4A87730")]
	public void CopyFrom(AnimationCurve other)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4A869B0", Offset = "0x4A869B0", VA = "0x4A869B0")]
	private static extern IntPtr Internal_Create_Injected(ref ManagedSpanWrapper keys);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4A86D90", Offset = "0x4A86D90", VA = "0x4A86D90")]
	private static extern int AddKey_Internal_Injected(AnimationCurve _unity_self, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4A86E10", Offset = "0x4A86E10", VA = "0x4A86E10")]
	private static extern int MoveKey_Injected(AnimationCurve _unity_self, int index, [In] ref Keyframe key);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4A86FF0", Offset = "0x4A86FF0", VA = "0x4A86FF0")]
	private static extern void SetKeys_Injected(AnimationCurve _unity_self, ref ManagedSpanWrapper keys);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000132")]
	[Address(RVA = "0x4A87030", Offset = "0x4A87030", VA = "0x4A87030")]
	private static extern void GetKey_Injected(AnimationCurve _unity_self, int index, out Keyframe ret);
}
