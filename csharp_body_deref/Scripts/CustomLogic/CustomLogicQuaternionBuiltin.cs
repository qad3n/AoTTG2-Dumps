using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000289")]
[CompilerGenerated]
internal class CustomLogicQuaternionBuiltin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x200028A")]
	public static class Factory
	{
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x3CBFF70", Offset = "0x3CBFF70", VA = "0x3CBFF70")]
		public static CustomLogicQuaternionBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200028B")]
	public static class Bindings
	{
		[Token(Token = "0x4000D55")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6000F2B")]
		[Address(RVA = "0x3CC0230", Offset = "0x3CC0230", VA = "0x3CC0230")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6000F2C")]
		[Address(RVA = "0x3CC0A30", Offset = "0x3CC0A30", VA = "0x3CC0A30")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__X()
		{
			return null;
		}

		[Token(Token = "0x6000F2D")]
		[Address(RVA = "0x3CC0B10", Offset = "0x3CC0B10", VA = "0x3CC0B10")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Y()
		{
			return null;
		}

		[Token(Token = "0x6000F2E")]
		[Address(RVA = "0x3CC0BF0", Offset = "0x3CC0BF0", VA = "0x3CC0BF0")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Z()
		{
			return null;
		}

		[Token(Token = "0x6000F2F")]
		[Address(RVA = "0x3CC0CD0", Offset = "0x3CC0CD0", VA = "0x3CC0CD0")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__W()
		{
			return null;
		}

		[Token(Token = "0x6000F30")]
		[Address(RVA = "0x3CC0DB0", Offset = "0x3CC0DB0", VA = "0x3CC0DB0")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Euler()
		{
			return null;
		}

		[Token(Token = "0x6000F31")]
		[Address(RVA = "0x3CC0E90", Offset = "0x3CC0E90", VA = "0x3CC0E90")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Identity()
		{
			return null;
		}

		[Token(Token = "0x6000F32")]
		[Address(RVA = "0x3CC0F30", Offset = "0x3CC0F30", VA = "0x3CC0F30")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Lerp()
		{
			return null;
		}

		[Token(Token = "0x6000F33")]
		[Address(RVA = "0x3CC1080", Offset = "0x3CC1080", VA = "0x3CC1080")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__LerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6000F34")]
		[Address(RVA = "0x3CC11D0", Offset = "0x3CC11D0", VA = "0x3CC11D0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Slerp()
		{
			return null;
		}

		[Token(Token = "0x6000F35")]
		[Address(RVA = "0x3CC1320", Offset = "0x3CC1320", VA = "0x3CC1320")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__SlerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6000F36")]
		[Address(RVA = "0x3CC1470", Offset = "0x3CC1470", VA = "0x3CC1470")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__FromEuler()
		{
			return null;
		}

		[Token(Token = "0x6000F37")]
		[Address(RVA = "0x3CC15C0", Offset = "0x3CC15C0", VA = "0x3CC15C0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__LookRotation()
		{
			return null;
		}

		[Token(Token = "0x6000F38")]
		[Address(RVA = "0x3CC1710", Offset = "0x3CC1710", VA = "0x3CC1710")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__FromToRotation()
		{
			return null;
		}

		[Token(Token = "0x6000F39")]
		[Address(RVA = "0x3CC1860", Offset = "0x3CC1860", VA = "0x3CC1860")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Inverse()
		{
			return null;
		}

		[Token(Token = "0x6000F3A")]
		[Address(RVA = "0x3CC19B0", Offset = "0x3CC19B0", VA = "0x3CC19B0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__RotateTowards()
		{
			return null;
		}

		[Token(Token = "0x6000F3B")]
		[Address(RVA = "0x3CC1B00", Offset = "0x3CC1B00", VA = "0x3CC1B00")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__AngleAxis()
		{
			return null;
		}

		[Token(Token = "0x6000F3C")]
		[Address(RVA = "0x3CC1C50", Offset = "0x3CC1C50", VA = "0x3CC1C50")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Angle()
		{
			return null;
		}

		[Token(Token = "0x6000F3D")]
		[Address(RVA = "0x3CC1DA0", Offset = "0x3CC1DA0", VA = "0x3CC1DA0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x6000F3E")]
		[Address(RVA = "0x3CC1EF0", Offset = "0x3CC1EF0", VA = "0x3CC1EF0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Mul__()
		{
			return null;
		}

		[Token(Token = "0x6000F3F")]
		[Address(RVA = "0x3CC2040", Offset = "0x3CC2040", VA = "0x3CC2040")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6000F40")]
		[Address(RVA = "0x3CC2190", Offset = "0x3CC2190", VA = "0x3CC2190")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000D54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Quaternion Value;

	[Token(Token = "0x170001AE")]
	public float X
	{
		[Token(Token = "0x6000F05")]
		[Address(RVA = "0x3CBF070", Offset = "0x3CBF070", VA = "0x3CBF070")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F06")]
		[Address(RVA = "0x3CBF080", Offset = "0x3CBF080", VA = "0x3CBF080")]
		set
		{
		}
	}

	[Token(Token = "0x170001AF")]
	public float Y
	{
		[Token(Token = "0x6000F07")]
		[Address(RVA = "0x3CBF090", Offset = "0x3CBF090", VA = "0x3CBF090")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F08")]
		[Address(RVA = "0x3CBF0A0", Offset = "0x3CBF0A0", VA = "0x3CBF0A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B0")]
	public float Z
	{
		[Token(Token = "0x6000F09")]
		[Address(RVA = "0x3CBF0B0", Offset = "0x3CBF0B0", VA = "0x3CBF0B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F0A")]
		[Address(RVA = "0x3CBF0C0", Offset = "0x3CBF0C0", VA = "0x3CBF0C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B1")]
	public float W
	{
		[Token(Token = "0x6000F0B")]
		[Address(RVA = "0x3CBF0D0", Offset = "0x3CBF0D0", VA = "0x3CBF0D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000F0C")]
		[Address(RVA = "0x3CBF0E0", Offset = "0x3CBF0E0", VA = "0x3CBF0E0")]
		set
		{
		}
	}

	[Token(Token = "0x170001B2")]
	public CustomLogicVector3Builtin Euler
	{
		[Token(Token = "0x6000F0D")]
		[Address(RVA = "0x3CBF0F0", Offset = "0x3CBF0F0", VA = "0x3CBF0F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F0E")]
		[Address(RVA = "0x3CBF250", Offset = "0x3CBF250", VA = "0x3CBF250")]
		set
		{
		}
	}

	[Token(Token = "0x170001B3")]
	public static CustomLogicQuaternionBuiltin Identity
	{
		[Token(Token = "0x6000F0F")]
		[Address(RVA = "0x3CBF290", Offset = "0x3CBF290", VA = "0x3CBF290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B4")]
	public override string ClassName
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x3CBFF10", Offset = "0x3CBFF10", VA = "0x3CBFF10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6000F27")]
		[Address(RVA = "0x3CBFF40", Offset = "0x3CBFF40", VA = "0x3CBFF40", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6000F28")]
		[Address(RVA = "0x3CBFF50", Offset = "0x3CBFF50", VA = "0x3CBFF50", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x3CBFF60", Offset = "0x3CBFF60", VA = "0x3CBFF60", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x3CBEE70", Offset = "0x3CBEE70", VA = "0x3CBEE70")]
	public CustomLogicQuaternionBuiltin()
	{
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x3CBEF00", Offset = "0x3CBEF00", VA = "0x3CBEF00")]
	public CustomLogicQuaternionBuiltin(float x, float y, float z, float w)
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x3CBEFD0", Offset = "0x3CBEFD0", VA = "0x3CBEFD0")]
	public CustomLogicQuaternionBuiltin(Quaternion value)
	{
	}

	[Token(Token = "0x6000F10")]
	[Address(RVA = "0x3CBF3A0", Offset = "0x3CBF3A0", VA = "0x3CBF3A0")]
	public static CustomLogicQuaternionBuiltin Lerp(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6000F11")]
	[Address(RVA = "0x3CBF3E0", Offset = "0x3CBF3E0", VA = "0x3CBF3E0")]
	public static CustomLogicQuaternionBuiltin LerpUnclamped(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6000F12")]
	[Address(RVA = "0x3CBF420", Offset = "0x3CBF420", VA = "0x3CBF420")]
	public static CustomLogicQuaternionBuiltin Slerp(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6000F13")]
	[Address(RVA = "0x3CBF460", Offset = "0x3CBF460", VA = "0x3CBF460")]
	public static CustomLogicQuaternionBuiltin SlerpUnclamped(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6000F14")]
	[Address(RVA = "0x3CBF4A0", Offset = "0x3CBF4A0", VA = "0x3CBF4A0")]
	public static CustomLogicQuaternionBuiltin FromEuler(CustomLogicVector3Builtin euler)
	{
		return null;
	}

	[Token(Token = "0x6000F15")]
	[Address(RVA = "0x3CBF4E0", Offset = "0x3CBF4E0", VA = "0x3CBF4E0")]
	public static CustomLogicQuaternionBuiltin LookRotation(CustomLogicVector3Builtin forward, [Optional] CustomLogicVector3Builtin upwards)
	{
		return null;
	}

	[Token(Token = "0x6000F16")]
	[Address(RVA = "0x3CBF5F0", Offset = "0x3CBF5F0", VA = "0x3CBF5F0")]
	public static CustomLogicQuaternionBuiltin FromToRotation(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6000F17")]
	[Address(RVA = "0x3CBF630", Offset = "0x3CBF630", VA = "0x3CBF630")]
	public static CustomLogicQuaternionBuiltin Inverse(CustomLogicQuaternionBuiltin q)
	{
		return null;
	}

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x3CBF660", Offset = "0x3CBF660", VA = "0x3CBF660")]
	public static CustomLogicQuaternionBuiltin RotateTowards(CustomLogicQuaternionBuiltin from, CustomLogicQuaternionBuiltin to, float maxDegreesDelta)
	{
		return null;
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x3CBF760", Offset = "0x3CBF760", VA = "0x3CBF760")]
	public static CustomLogicQuaternionBuiltin AngleAxis(float angle, CustomLogicVector3Builtin axis)
	{
		return null;
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x3CBF790", Offset = "0x3CBF790", VA = "0x3CBF790")]
	public static float Angle(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b)
	{
		return default(float);
	}

	[Token(Token = "0x6000F1B")]
	[Address(RVA = "0x3CBF810", Offset = "0x3CBF810", VA = "0x3CBF810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F1C")]
	[Address(RVA = "0x3CBF820", Offset = "0x3CBF820", VA = "0x3CBF820", Slot = "16")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6000F1D")]
	[Address(RVA = "0x3CBF8F0", Offset = "0x3CBF8F0", VA = "0x3CBF8F0", Slot = "9")]
	public object __Add__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000F1E")]
	[Address(RVA = "0x3CBF930", Offset = "0x3CBF930", VA = "0x3CBF930", Slot = "10")]
	public object __Sub__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000F1F")]
	[Address(RVA = "0x3CBF970", Offset = "0x3CBF970", VA = "0x3CBF970", Slot = "11")]
	public object __Mul__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000F20")]
	[Address(RVA = "0x3CBFD30", Offset = "0x3CBFD30", VA = "0x3CBFD30", Slot = "12")]
	public object __Div__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x3CBFD70", Offset = "0x3CBFD70", VA = "0x3CBFD70", Slot = "14")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x3CBFE50", Offset = "0x3CBFE50", VA = "0x3CBFE50", Slot = "15")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x3CBFEB0", Offset = "0x3CBFEB0", VA = "0x3CBFEB0", Slot = "13")]
	public object __Mod__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x3CBFEF0", Offset = "0x3CBFEF0", VA = "0x3CBFEF0")]
	public static implicit operator Quaternion(CustomLogicQuaternionBuiltin q)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x3CBF2D0", Offset = "0x3CBF2D0", VA = "0x3CBF2D0")]
	public static implicit operator CustomLogicQuaternionBuiltin(Quaternion q)
	{
		return null;
	}
}
