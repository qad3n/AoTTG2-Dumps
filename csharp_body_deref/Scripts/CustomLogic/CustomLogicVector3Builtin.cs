// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicVector3Builtin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicVector3Builtin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicVector3Builtin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200041C")]
[CompilerGenerated]
internal class CustomLogicVector3Builtin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x200041D")]
	public static class Factory
	{
		[Token(Token = "0x6001A87")]
		[Address(RVA = "0x1F07D60", Offset = "0x1F06360", VA = "0x181F07D60")]
		public static CustomLogicVector3Builtin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200041E")]
	public static class Bindings
	{
		[Token(Token = "0x4001497")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001A88")]
		[Address(RVA = "0x1EE51C0", Offset = "0x1EE37C0", VA = "0x181EE51C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001A89")]
		[Address(RVA = "0x1EFEE00", Offset = "0x1EFD400", VA = "0x181EFEE00")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__X()
		{
			return null;
		}

		[Token(Token = "0x6001A8A")]
		[Address(RVA = "0x1EFEEF0", Offset = "0x1EFD4F0", VA = "0x181EFEEF0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Y()
		{
			return null;
		}

		[Token(Token = "0x6001A8B")]
		[Address(RVA = "0x1EFEFE0", Offset = "0x1EFD5E0", VA = "0x181EFEFE0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Z()
		{
			return null;
		}

		[Token(Token = "0x6001A8C")]
		[Address(RVA = "0x1EFCD30", Offset = "0x1EFB330", VA = "0x181EFCD30")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Normalized()
		{
			return null;
		}

		[Token(Token = "0x6001A8D")]
		[Address(RVA = "0x1EFCB50", Offset = "0x1EFB150", VA = "0x181EFCB50")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Magnitude()
		{
			return null;
		}

		[Token(Token = "0x6001A8E")]
		[Address(RVA = "0x1EFE1D0", Offset = "0x1EFC7D0", VA = "0x181EFE1D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__SqrMagnitude()
		{
			return null;
		}

		[Token(Token = "0x6001A8F")]
		[Address(RVA = "0x1EFF0D0", Offset = "0x1EFD6D0", VA = "0x181EFF0D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Zero()
		{
			return null;
		}

		[Token(Token = "0x6001A90")]
		[Address(RVA = "0x1EFCFB0", Offset = "0x1EFB5B0", VA = "0x181EFCFB0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__One()
		{
			return null;
		}

		[Token(Token = "0x6001A91")]
		[Address(RVA = "0x1EFE8B0", Offset = "0x1EFCEB0", VA = "0x181EFE8B0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6001A92")]
		[Address(RVA = "0x1EFB840", Offset = "0x1EF9E40", VA = "0x181EFB840")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Down()
		{
			return null;
		}

		[Token(Token = "0x6001A93")]
		[Address(RVA = "0x1EFC6F0", Offset = "0x1EFACF0", VA = "0x181EFC6F0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Left()
		{
			return null;
		}

		[Token(Token = "0x6001A94")]
		[Address(RVA = "0x1EFD7D0", Offset = "0x1EFBDD0", VA = "0x181EFD7D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6001A95")]
		[Address(RVA = "0x1EFBE80", Offset = "0x1EFA480", VA = "0x181EFBE80")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x6001A96")]
		[Address(RVA = "0x1EFA940", Offset = "0x1EF8F40", VA = "0x181EFA940")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Back()
		{
			return null;
		}

		[Token(Token = "0x6001A97")]
		[Address(RVA = "0x1EFCC90", Offset = "0x1EFB290", VA = "0x181EFCC90")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__NegativeInfinity()
		{
			return null;
		}

		[Token(Token = "0x6001A98")]
		[Address(RVA = "0x1EFD2D0", Offset = "0x1EFB8D0", VA = "0x181EFD2D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__PositiveInfinity()
		{
			return null;
		}

		[Token(Token = "0x6001A99")]
		[Address(RVA = "0x1EF4280", Offset = "0x1EF2880", VA = "0x181EF4280")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Angle()
		{
			return null;
		}

		[Token(Token = "0x6001A9A")]
		[Address(RVA = "0x1EF4700", Offset = "0x1EF2D00", VA = "0x181EF4700")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ClampMagnitude()
		{
			return null;
		}

		[Token(Token = "0x6001A9B")]
		[Address(RVA = "0x1EF4B80", Offset = "0x1EF3180", VA = "0x181EF4B80")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Cross()
		{
			return null;
		}

		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x1EF4DC0", Offset = "0x1EF33C0", VA = "0x181EF4DC0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Distance()
		{
			return null;
		}

		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x1EF5010", Offset = "0x1EF3610", VA = "0x181EF5010")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Dot()
		{
			return null;
		}

		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x1EF6A20", Offset = "0x1EF5020", VA = "0x181EF6A20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Lerp()
		{
			return null;
		}

		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x1EF6900", Offset = "0x1EF4F00", VA = "0x181EF6900")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__LerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6001AA0")]
		[Address(RVA = "0x1EF6B40", Offset = "0x1EF5140", VA = "0x181EF6B40")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Max()
		{
			return null;
		}

		[Token(Token = "0x6001AA1")]
		[Address(RVA = "0x1EF6C60", Offset = "0x1EF5260", VA = "0x181EF6C60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Min()
		{
			return null;
		}

		[Token(Token = "0x6001AA2")]
		[Address(RVA = "0x1EF6D80", Offset = "0x1EF5380", VA = "0x181EF6D80")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__MoveTowards()
		{
			return null;
		}

		[Token(Token = "0x6001AA3")]
		[Address(RVA = "0x1EF6FD0", Offset = "0x1EF55D0", VA = "0x181EF6FD0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Normalize()
		{
			return null;
		}

		[Token(Token = "0x6001AA4")]
		[Address(RVA = "0x1EF70F0", Offset = "0x1EF56F0", VA = "0x181EF70F0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__OrthoNormalize()
		{
			return null;
		}

		[Token(Token = "0x6001AA5")]
		[Address(RVA = "0x1EF7C30", Offset = "0x1EF6230", VA = "0x181EF7C30")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Project()
		{
			return null;
		}

		[Token(Token = "0x6001AA6")]
		[Address(RVA = "0x1EF7B10", Offset = "0x1EF6110", VA = "0x181EF7B10")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ProjectOnPlane()
		{
			return null;
		}

		[Token(Token = "0x6001AA7")]
		[Address(RVA = "0x1EF7E70", Offset = "0x1EF6470", VA = "0x181EF7E70")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Reflect()
		{
			return null;
		}

		[Token(Token = "0x6001AA8")]
		[Address(RVA = "0x1EF80C0", Offset = "0x1EF66C0", VA = "0x181EF80C0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__RotateTowards()
		{
			return null;
		}

		[Token(Token = "0x6001AA9")]
		[Address(RVA = "0x1EF90E0", Offset = "0x1EF76E0", VA = "0x181EF90E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SignedAngle()
		{
			return null;
		}

		[Token(Token = "0x6001AAA")]
		[Address(RVA = "0x1EF9340", Offset = "0x1EF7940", VA = "0x181EF9340")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Slerp()
		{
			return null;
		}

		[Token(Token = "0x6001AAB")]
		[Address(RVA = "0x1EF9210", Offset = "0x1EF7810", VA = "0x181EF9210")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SlerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6001AAC")]
		[Address(RVA = "0x1EF9470", Offset = "0x1EF7A70", VA = "0x181EF9470")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SmoothDamp()
		{
			return null;
		}

		[Token(Token = "0x6001AAD")]
		[Address(RVA = "0x1EF8E90", Offset = "0x1EF7490", VA = "0x181EF8E90")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6001AAE")]
		[Address(RVA = "0x1EF81F0", Offset = "0x1EF67F0", VA = "0x181EF81F0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x6001AAF")]
		[Address(RVA = "0x1EF6EA0", Offset = "0x1EF54A0", VA = "0x181EF6EA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Multiply()
		{
			return null;
		}

		[Token(Token = "0x6001AB0")]
		[Address(RVA = "0x1EF4EE0", Offset = "0x1EF34E0", VA = "0x181EF4EE0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Divide()
		{
			return null;
		}

		[Token(Token = "0x6001AB1")]
		[Address(RVA = "0x1EF6110", Offset = "0x1EF4710", VA = "0x181EF6110")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__GetRotationDirection()
		{
			return null;
		}

		[Token(Token = "0x6001AB2")]
		[Address(RVA = "0x1EF9B50", Offset = "0x1EF8150", VA = "0x181EF9B50")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x6001AB3")]
		[Address(RVA = "0x1EF9A20", Offset = "0x1EF8020", VA = "0x181EF9A20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Add__()
		{
			return null;
		}

		[Token(Token = "0x6001AB4")]
		[Address(RVA = "0x1EFA4A0", Offset = "0x1EF8AA0", VA = "0x181EFA4A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Sub__()
		{
			return null;
		}

		[Token(Token = "0x6001AB5")]
		[Address(RVA = "0x1EFA370", Offset = "0x1EF8970", VA = "0x181EFA370")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Mul__()
		{
			return null;
		}

		[Token(Token = "0x6001AB6")]
		[Address(RVA = "0x1EF9DA0", Offset = "0x1EF83A0", VA = "0x181EF9DA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Div__()
		{
			return null;
		}

		[Token(Token = "0x6001AB7")]
		[Address(RVA = "0x1EF9ED0", Offset = "0x1EF84D0", VA = "0x181EF9ED0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6001AB8")]
		[Address(RVA = "0x1EFA240", Offset = "0x1EF8840", VA = "0x181EFA240")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4001496")]
	[FieldOffset(Offset = "0x30")]
	public Vector3 Value;

	[Token(Token = "0x170002E0")]
	public float X
	{
		[Token(Token = "0x6001A4C")]
		[Address(RVA = "0x584C90", Offset = "0x583290", VA = "0x180584C90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001A4D")]
		[Address(RVA = "0x584CB0", Offset = "0x5832B0", VA = "0x180584CB0")]
		set
		{
		}
	}

	[Token(Token = "0x170002E1")]
	public float Y
	{
		[Token(Token = "0x6001A4E")]
		[Address(RVA = "0x16EF890", Offset = "0x16EDE90", VA = "0x1816EF890")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001A4F")]
		[Address(RVA = "0x16EF940", Offset = "0x16EDF40", VA = "0x1816EF940")]
		set
		{
		}
	}

	[Token(Token = "0x170002E2")]
	public float Z
	{
		[Token(Token = "0x6001A50")]
		[Address(RVA = "0x585020", Offset = "0x583620", VA = "0x180585020")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001A51")]
		[Address(RVA = "0x1ED2F30", Offset = "0x1ED1530", VA = "0x181ED2F30")]
		set
		{
		}
	}

	[Token(Token = "0x170002E3")]
	public CustomLogicVector3Builtin Normalized
	{
		[Token(Token = "0x6001A52")]
		[Address(RVA = "0x1ED8360", Offset = "0x1ED6960", VA = "0x181ED8360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E4")]
	public float Magnitude
	{
		[Token(Token = "0x6001A53")]
		[Address(RVA = "0x1ED8280", Offset = "0x1ED6880", VA = "0x181ED8280")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002E5")]
	public float SqrMagnitude
	{
		[Token(Token = "0x6001A54")]
		[Address(RVA = "0x1ED86E0", Offset = "0x1ED6CE0", VA = "0x181ED86E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170002E6")]
	public static CustomLogicVector3Builtin Zero
	{
		[Token(Token = "0x6001A55")]
		[Address(RVA = "0x1ED87E0", Offset = "0x1ED6DE0", VA = "0x181ED87E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E7")]
	public static CustomLogicVector3Builtin One
	{
		[Token(Token = "0x6001A56")]
		[Address(RVA = "0x1ED8470", Offset = "0x1ED6A70", VA = "0x181ED8470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E8")]
	public static CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x6001A57")]
		[Address(RVA = "0x1ED8710", Offset = "0x1ED6D10", VA = "0x181ED8710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E9")]
	public static CustomLogicVector3Builtin Down
	{
		[Token(Token = "0x6001A58")]
		[Address(RVA = "0x1ED8010", Offset = "0x1ED6610", VA = "0x181ED8010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EA")]
	public static CustomLogicVector3Builtin Left
	{
		[Token(Token = "0x6001A59")]
		[Address(RVA = "0x1ED81B0", Offset = "0x1ED67B0", VA = "0x181ED81B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EB")]
	public static CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x6001A5A")]
		[Address(RVA = "0x1ED8610", Offset = "0x1ED6C10", VA = "0x181ED8610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EC")]
	public static CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x6001A5B")]
		[Address(RVA = "0x1ED80E0", Offset = "0x1ED66E0", VA = "0x181ED80E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002ED")]
	public static CustomLogicVector3Builtin Back
	{
		[Token(Token = "0x6001A5C")]
		[Address(RVA = "0x1ED7F10", Offset = "0x1ED6510", VA = "0x181ED7F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EE")]
	public static CustomLogicVector3Builtin NegativeInfinity
	{
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x1ED8290", Offset = "0x1ED6890", VA = "0x181ED8290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002EF")]
	public static CustomLogicVector3Builtin PositiveInfinity
	{
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x1ED8540", Offset = "0x1ED6B40", VA = "0x181ED8540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F0")]
	public override string ClassName
	{
		[Token(Token = "0x6001A83")]
		[Address(RVA = "0x1ED7FE0", Offset = "0x1ED65E0", VA = "0x181ED7FE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002F1")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F2")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F3")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001A86")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A47")]
	[Address(RVA = "0x1ED7E40", Offset = "0x1ED6440", VA = "0x181ED7E40")]
	public CustomLogicVector3Builtin()
	{
	}

	[Token(Token = "0x6001A48")]
	[Address(RVA = "0x1ED7EA0", Offset = "0x1ED64A0", VA = "0x181ED7EA0")]
	public CustomLogicVector3Builtin(float xyz)
	{
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x1ED7D30", Offset = "0x1ED6330", VA = "0x181ED7D30")]
	public CustomLogicVector3Builtin(float x, float y)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x1ED7DB0", Offset = "0x1ED63B0", VA = "0x181ED7DB0")]
	public CustomLogicVector3Builtin(float x, float y, float z)
	{
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x1ED7CC0", Offset = "0x1ED62C0", VA = "0x181ED7CC0")]
	public CustomLogicVector3Builtin(Vector3 value)
	{
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x1ED5380", Offset = "0x1ED3980", VA = "0x181ED5380")]
	public static float Angle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to)
	{
		return default(float);
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x1ED53D0", Offset = "0x1ED39D0", VA = "0x181ED53D0")]
	public static CustomLogicVector3Builtin ClampMagnitude(CustomLogicVector3Builtin vector, float maxLength)
	{
		return null;
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x1ED5560", Offset = "0x1ED3B60", VA = "0x181ED5560")]
	public static CustomLogicVector3Builtin Cross(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x1ED5680", Offset = "0x1ED3C80", VA = "0x181ED5680")]
	public static float Distance(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x1ED58B0", Offset = "0x1ED3EB0", VA = "0x181ED58B0")]
	public static float Dot(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x1ED5B30", Offset = "0x1ED4130", VA = "0x181ED5B30")]
	public static CustomLogicVector3Builtin Lerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x1ED5A10", Offset = "0x1ED4010", VA = "0x181ED5A10")]
	public static CustomLogicVector3Builtin LerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x1ED5C70", Offset = "0x1ED4270", VA = "0x181ED5C70")]
	public static CustomLogicVector3Builtin Max(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x1ED5D60", Offset = "0x1ED4360", VA = "0x181ED5D60")]
	public static CustomLogicVector3Builtin Min(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x1ED5E50", Offset = "0x1ED4450", VA = "0x181ED5E50")]
	public static CustomLogicVector3Builtin MoveTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxDistanceDelta)
	{
		return null;
	}

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x1ED61D0", Offset = "0x1ED47D0", VA = "0x181ED61D0")]
	public static CustomLogicVector3Builtin Normalize(CustomLogicVector3Builtin value)
	{
		return null;
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x1ED6300", Offset = "0x1ED4900", VA = "0x181ED6300")]
	public static void OrthoNormalize(CustomLogicVector3Builtin normal, CustomLogicVector3Builtin tangent)
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x1ED64F0", Offset = "0x1ED4AF0", VA = "0x181ED64F0")]
	public static CustomLogicVector3Builtin Project(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x1ED6330", Offset = "0x1ED4930", VA = "0x181ED6330")]
	public static CustomLogicVector3Builtin ProjectOnPlane(CustomLogicVector3Builtin vector, CustomLogicVector3Builtin plane)
	{
		return null;
	}

	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x1ED66D0", Offset = "0x1ED4CD0", VA = "0x181ED66D0")]
	public static CustomLogicVector3Builtin Reflect(CustomLogicVector3Builtin inDirection, CustomLogicVector3Builtin inNormal)
	{
		return null;
	}

	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x1ED6810", Offset = "0x1ED4E10", VA = "0x181ED6810")]
	public static CustomLogicVector3Builtin RotateTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return null;
	}

	[Token(Token = "0x6001A6F")]
	[Address(RVA = "0x1ED6B80", Offset = "0x1ED5180", VA = "0x181ED6B80")]
	public static float SignedAngle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to, CustomLogicVector3Builtin axis)
	{
		return default(float);
	}

	[Token(Token = "0x6001A70")]
	[Address(RVA = "0x1ED6DE0", Offset = "0x1ED53E0", VA = "0x181ED6DE0")]
	public static CustomLogicVector3Builtin Slerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001A71")]
	[Address(RVA = "0x1ED6CE0", Offset = "0x1ED52E0", VA = "0x181ED6CE0")]
	public static CustomLogicVector3Builtin SlerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001A72")]
	[Address(RVA = "0x1ED6EE0", Offset = "0x1ED54E0", VA = "0x181ED6EE0")]
	public static CustomLogicVector3Builtin SmoothDamp(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, CustomLogicVector3Builtin currentVelocity, float smoothTime, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x1ED6B70", Offset = "0x1ED5170", VA = "0x181ED6B70")]
	public void Set(float x, float y, float z)
	{
	}

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x1ED6920", Offset = "0x1ED4F20", VA = "0x181ED6920")]
	[Obsolete("Use multiply operator instead")]
	public CustomLogicVector3Builtin Scale(object scale)
	{
		return null;
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x1ED60B0", Offset = "0x1ED46B0", VA = "0x181ED60B0")]
	[Obsolete("Use multiply operator instead")]
	public static CustomLogicVector3Builtin Multiply(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x1ED5790", Offset = "0x1ED3D90", VA = "0x181ED5790")]
	[Obsolete("Use divide operator instead")]
	public static CustomLogicVector3Builtin Divide(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x1ED58F0", Offset = "0x1ED3EF0", VA = "0x181ED58F0")]
	public static CustomLogicVector3Builtin GetRotationDirection(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x1ED7020", Offset = "0x1ED5620", VA = "0x181ED7020", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x1ED72B0", Offset = "0x1ED58B0", VA = "0x181ED72B0", Slot = "18")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x1ED7140", Offset = "0x1ED5740", VA = "0x181ED7140", Slot = "11")]
	public object __Add__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x1ED7B50", Offset = "0x1ED6150", VA = "0x181ED7B50", Slot = "12")]
	public object __Sub__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x1ED7790", Offset = "0x1ED5D90", VA = "0x181ED7790", Slot = "13")]
	public object __Mul__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x1ED7370", Offset = "0x1ED5970", VA = "0x181ED7370", Slot = "14")]
	public object __Div__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x1ED7630", Offset = "0x1ED5C30", VA = "0x181ED7630", Slot = "16")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x1ED76F0", Offset = "0x1ED5CF0", VA = "0x181ED76F0", Slot = "17")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x1ED7750", Offset = "0x1ED5D50", VA = "0x181ED7750", Slot = "15")]
	public object __Mod__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x1ED8940", Offset = "0x1ED6F40", VA = "0x181ED8940")]
	public static implicit operator Vector3(CustomLogicVector3Builtin v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x1ED88B0", Offset = "0x1ED6EB0", VA = "0x181ED88B0")]
	public static implicit operator CustomLogicVector3Builtin(Vector3 v)
	{
		return null;
	}
}
