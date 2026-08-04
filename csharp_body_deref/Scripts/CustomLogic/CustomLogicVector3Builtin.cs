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

[Token(Token = "0x20002D1")]
[CompilerGenerated]
internal class CustomLogicVector3Builtin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x20002D2")]
	public static class Factory
	{
		[Token(Token = "0x6001205")]
		[Address(RVA = "0x3FD6650", Offset = "0x3FD6650", VA = "0x3FD6650")]
		public static CustomLogicVector3Builtin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002D3")]
	public static class Bindings
	{
		[Token(Token = "0x4000E77")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001206")]
		[Address(RVA = "0x3FD6A00", Offset = "0x3FD6A00", VA = "0x3FD6A00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001207")]
		[Address(RVA = "0x3FD7B90", Offset = "0x3FD7B90", VA = "0x3FD7B90")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__X()
		{
			return null;
		}

		[Token(Token = "0x6001208")]
		[Address(RVA = "0x3FD7C70", Offset = "0x3FD7C70", VA = "0x3FD7C70")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Y()
		{
			return null;
		}

		[Token(Token = "0x6001209")]
		[Address(RVA = "0x3FD7D50", Offset = "0x3FD7D50", VA = "0x3FD7D50")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Z()
		{
			return null;
		}

		[Token(Token = "0x600120A")]
		[Address(RVA = "0x3FD7E30", Offset = "0x3FD7E30", VA = "0x3FD7E30")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Normalized()
		{
			return null;
		}

		[Token(Token = "0x600120B")]
		[Address(RVA = "0x3FD7ED0", Offset = "0x3FD7ED0", VA = "0x3FD7ED0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Magnitude()
		{
			return null;
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x3FD7F70", Offset = "0x3FD7F70", VA = "0x3FD7F70")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__SqrMagnitude()
		{
			return null;
		}

		[Token(Token = "0x600120D")]
		[Address(RVA = "0x3FD8010", Offset = "0x3FD8010", VA = "0x3FD8010")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Zero()
		{
			return null;
		}

		[Token(Token = "0x600120E")]
		[Address(RVA = "0x3FD80B0", Offset = "0x3FD80B0", VA = "0x3FD80B0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__One()
		{
			return null;
		}

		[Token(Token = "0x600120F")]
		[Address(RVA = "0x3FD8150", Offset = "0x3FD8150", VA = "0x3FD8150")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6001210")]
		[Address(RVA = "0x3FD81F0", Offset = "0x3FD81F0", VA = "0x3FD81F0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Down()
		{
			return null;
		}

		[Token(Token = "0x6001211")]
		[Address(RVA = "0x3FD8290", Offset = "0x3FD8290", VA = "0x3FD8290")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Left()
		{
			return null;
		}

		[Token(Token = "0x6001212")]
		[Address(RVA = "0x3FD8330", Offset = "0x3FD8330", VA = "0x3FD8330")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x3FD83D0", Offset = "0x3FD83D0", VA = "0x3FD83D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x6001214")]
		[Address(RVA = "0x3FD8470", Offset = "0x3FD8470", VA = "0x3FD8470")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Back()
		{
			return null;
		}

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x3FD8510", Offset = "0x3FD8510", VA = "0x3FD8510")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__NegativeInfinity()
		{
			return null;
		}

		[Token(Token = "0x6001216")]
		[Address(RVA = "0x3FD85B0", Offset = "0x3FD85B0", VA = "0x3FD85B0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__PositiveInfinity()
		{
			return null;
		}

		[Token(Token = "0x6001217")]
		[Address(RVA = "0x3FD8650", Offset = "0x3FD8650", VA = "0x3FD8650")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Angle()
		{
			return null;
		}

		[Token(Token = "0x6001218")]
		[Address(RVA = "0x3FD87A0", Offset = "0x3FD87A0", VA = "0x3FD87A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ClampMagnitude()
		{
			return null;
		}

		[Token(Token = "0x6001219")]
		[Address(RVA = "0x3FD88F0", Offset = "0x3FD88F0", VA = "0x3FD88F0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Cross()
		{
			return null;
		}

		[Token(Token = "0x600121A")]
		[Address(RVA = "0x3FD8A40", Offset = "0x3FD8A40", VA = "0x3FD8A40")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Distance()
		{
			return null;
		}

		[Token(Token = "0x600121B")]
		[Address(RVA = "0x3FD8B90", Offset = "0x3FD8B90", VA = "0x3FD8B90")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Dot()
		{
			return null;
		}

		[Token(Token = "0x600121C")]
		[Address(RVA = "0x3FD8CE0", Offset = "0x3FD8CE0", VA = "0x3FD8CE0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Lerp()
		{
			return null;
		}

		[Token(Token = "0x600121D")]
		[Address(RVA = "0x3FD8E30", Offset = "0x3FD8E30", VA = "0x3FD8E30")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__LerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x600121E")]
		[Address(RVA = "0x3FD8F80", Offset = "0x3FD8F80", VA = "0x3FD8F80")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Max()
		{
			return null;
		}

		[Token(Token = "0x600121F")]
		[Address(RVA = "0x3FD90D0", Offset = "0x3FD90D0", VA = "0x3FD90D0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Min()
		{
			return null;
		}

		[Token(Token = "0x6001220")]
		[Address(RVA = "0x3FD9220", Offset = "0x3FD9220", VA = "0x3FD9220")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__MoveTowards()
		{
			return null;
		}

		[Token(Token = "0x6001221")]
		[Address(RVA = "0x3FD9370", Offset = "0x3FD9370", VA = "0x3FD9370")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Normalize()
		{
			return null;
		}

		[Token(Token = "0x6001222")]
		[Address(RVA = "0x3FD94C0", Offset = "0x3FD94C0", VA = "0x3FD94C0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__OrthoNormalize()
		{
			return null;
		}

		[Token(Token = "0x6001223")]
		[Address(RVA = "0x3FD9610", Offset = "0x3FD9610", VA = "0x3FD9610")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Project()
		{
			return null;
		}

		[Token(Token = "0x6001224")]
		[Address(RVA = "0x3FD9760", Offset = "0x3FD9760", VA = "0x3FD9760")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ProjectOnPlane()
		{
			return null;
		}

		[Token(Token = "0x6001225")]
		[Address(RVA = "0x3FD98B0", Offset = "0x3FD98B0", VA = "0x3FD98B0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Reflect()
		{
			return null;
		}

		[Token(Token = "0x6001226")]
		[Address(RVA = "0x3FD9A00", Offset = "0x3FD9A00", VA = "0x3FD9A00")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__RotateTowards()
		{
			return null;
		}

		[Token(Token = "0x6001227")]
		[Address(RVA = "0x3FD9B50", Offset = "0x3FD9B50", VA = "0x3FD9B50")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SignedAngle()
		{
			return null;
		}

		[Token(Token = "0x6001228")]
		[Address(RVA = "0x3FD9CA0", Offset = "0x3FD9CA0", VA = "0x3FD9CA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Slerp()
		{
			return null;
		}

		[Token(Token = "0x6001229")]
		[Address(RVA = "0x3FD9DF0", Offset = "0x3FD9DF0", VA = "0x3FD9DF0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SlerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x600122A")]
		[Address(RVA = "0x3FD9F40", Offset = "0x3FD9F40", VA = "0x3FD9F40")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SmoothDamp()
		{
			return null;
		}

		[Token(Token = "0x600122B")]
		[Address(RVA = "0x3FDA090", Offset = "0x3FDA090", VA = "0x3FDA090")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x600122C")]
		[Address(RVA = "0x3FDA1E0", Offset = "0x3FDA1E0", VA = "0x3FDA1E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x600122D")]
		[Address(RVA = "0x3FDA330", Offset = "0x3FDA330", VA = "0x3FDA330")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Multiply()
		{
			return null;
		}

		[Token(Token = "0x600122E")]
		[Address(RVA = "0x3FDA480", Offset = "0x3FDA480", VA = "0x3FDA480")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Divide()
		{
			return null;
		}

		[Token(Token = "0x600122F")]
		[Address(RVA = "0x3FDA5D0", Offset = "0x3FDA5D0", VA = "0x3FDA5D0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__GetRotationDirection()
		{
			return null;
		}

		[Token(Token = "0x6001230")]
		[Address(RVA = "0x3FDA720", Offset = "0x3FDA720", VA = "0x3FDA720")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x6001231")]
		[Address(RVA = "0x3FDA870", Offset = "0x3FDA870", VA = "0x3FDA870")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Add__()
		{
			return null;
		}

		[Token(Token = "0x6001232")]
		[Address(RVA = "0x3FDA9C0", Offset = "0x3FDA9C0", VA = "0x3FDA9C0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Sub__()
		{
			return null;
		}

		[Token(Token = "0x6001233")]
		[Address(RVA = "0x3FDAB10", Offset = "0x3FDAB10", VA = "0x3FDAB10")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Mul__()
		{
			return null;
		}

		[Token(Token = "0x6001234")]
		[Address(RVA = "0x3FDAC60", Offset = "0x3FDAC60", VA = "0x3FDAC60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Div__()
		{
			return null;
		}

		[Token(Token = "0x6001235")]
		[Address(RVA = "0x3FDADB0", Offset = "0x3FDADB0", VA = "0x3FDADB0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x6001236")]
		[Address(RVA = "0x3FDAF00", Offset = "0x3FDAF00", VA = "0x3FDAF00")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000E76")]
	[FieldOffset(Offset = "0x30")]
	public Vector3 Value;

	[Token(Token = "0x1700022B")]
	public float X
	{
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x3FD33A0", Offset = "0x3FD33A0", VA = "0x3FD33A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x3FD33B0", Offset = "0x3FD33B0", VA = "0x3FD33B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700022C")]
	public float Y
	{
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x3FD33C0", Offset = "0x3FD33C0", VA = "0x3FD33C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011CD")]
		[Address(RVA = "0x3FD33D0", Offset = "0x3FD33D0", VA = "0x3FD33D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700022D")]
	public float Z
	{
		[Token(Token = "0x60011CE")]
		[Address(RVA = "0x3FD33E0", Offset = "0x3FD33E0", VA = "0x3FD33E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011CF")]
		[Address(RVA = "0x3FD33F0", Offset = "0x3FD33F0", VA = "0x3FD33F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700022E")]
	public CustomLogicVector3Builtin Normalized
	{
		[Token(Token = "0x60011D0")]
		[Address(RVA = "0x3FD3400", Offset = "0x3FD3400", VA = "0x3FD3400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022F")]
	public float Magnitude
	{
		[Token(Token = "0x60011D1")]
		[Address(RVA = "0x3FD3650", Offset = "0x3FD3650", VA = "0x3FD3650")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000230")]
	public float SqrMagnitude
	{
		[Token(Token = "0x60011D2")]
		[Address(RVA = "0x3FD36E0", Offset = "0x3FD36E0", VA = "0x3FD36E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000231")]
	public static CustomLogicVector3Builtin Zero
	{
		[Token(Token = "0x60011D3")]
		[Address(RVA = "0x3FD3700", Offset = "0x3FD3700", VA = "0x3FD3700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000232")]
	public static CustomLogicVector3Builtin One
	{
		[Token(Token = "0x60011D4")]
		[Address(RVA = "0x3FD37C0", Offset = "0x3FD37C0", VA = "0x3FD37C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000233")]
	public static CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x60011D5")]
		[Address(RVA = "0x3FD3880", Offset = "0x3FD3880", VA = "0x3FD3880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public static CustomLogicVector3Builtin Down
	{
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x3FD3940", Offset = "0x3FD3940", VA = "0x3FD3940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000235")]
	public static CustomLogicVector3Builtin Left
	{
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x3FD3A00", Offset = "0x3FD3A00", VA = "0x3FD3A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000236")]
	public static CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x3FD3AC0", Offset = "0x3FD3AC0", VA = "0x3FD3AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000237")]
	public static CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x60011D9")]
		[Address(RVA = "0x3FD3B80", Offset = "0x3FD3B80", VA = "0x3FD3B80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000238")]
	public static CustomLogicVector3Builtin Back
	{
		[Token(Token = "0x60011DA")]
		[Address(RVA = "0x3FD3C40", Offset = "0x3FD3C40", VA = "0x3FD3C40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	public static CustomLogicVector3Builtin NegativeInfinity
	{
		[Token(Token = "0x60011DB")]
		[Address(RVA = "0x3FD3D00", Offset = "0x3FD3D00", VA = "0x3FD3D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	public static CustomLogicVector3Builtin PositiveInfinity
	{
		[Token(Token = "0x60011DC")]
		[Address(RVA = "0x3FD3DC0", Offset = "0x3FD3DC0", VA = "0x3FD3DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023B")]
	public override string ClassName
	{
		[Token(Token = "0x6001201")]
		[Address(RVA = "0x3FD65F0", Offset = "0x3FD65F0", VA = "0x3FD65F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001202")]
		[Address(RVA = "0x3FD6620", Offset = "0x3FD6620", VA = "0x3FD6620", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023D")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001203")]
		[Address(RVA = "0x3FD6630", Offset = "0x3FD6630", VA = "0x3FD6630", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700023E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001204")]
		[Address(RVA = "0x3FD6640", Offset = "0x3FD6640", VA = "0x3FD6640", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x3FD3160", Offset = "0x3FD3160", VA = "0x3FD3160")]
	public CustomLogicVector3Builtin()
	{
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x3FD31C0", Offset = "0x3FD31C0", VA = "0x3FD31C0")]
	public CustomLogicVector3Builtin(float xyz)
	{
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x3FD3230", Offset = "0x3FD3230", VA = "0x3FD3230")]
	public CustomLogicVector3Builtin(float x, float y)
	{
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x3FD32B0", Offset = "0x3FD32B0", VA = "0x3FD32B0")]
	public CustomLogicVector3Builtin(float x, float y, float z)
	{
	}

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x3FD3330", Offset = "0x3FD3330", VA = "0x3FD3330")]
	public CustomLogicVector3Builtin(Vector3 value)
	{
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x3FD3E80", Offset = "0x3FD3E80", VA = "0x3FD3E80")]
	public static float Angle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to)
	{
		return default(float);
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x3FD4060", Offset = "0x3FD4060", VA = "0x3FD4060")]
	public static CustomLogicVector3Builtin ClampMagnitude(CustomLogicVector3Builtin vector, float maxLength)
	{
		return null;
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x3FD4200", Offset = "0x3FD4200", VA = "0x3FD4200")]
	public static CustomLogicVector3Builtin Cross(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x3FD4380", Offset = "0x3FD4380", VA = "0x3FD4380")]
	public static float Distance(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x3FD4460", Offset = "0x3FD4460", VA = "0x3FD4460")]
	public static float Dot(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x3FD44A0", Offset = "0x3FD44A0", VA = "0x3FD44A0")]
	public static CustomLogicVector3Builtin Lerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x3FD45F0", Offset = "0x3FD45F0", VA = "0x3FD45F0")]
	public static CustomLogicVector3Builtin LerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x3FD4720", Offset = "0x3FD4720", VA = "0x3FD4720")]
	public static CustomLogicVector3Builtin Max(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x3FD4800", Offset = "0x3FD4800", VA = "0x3FD4800")]
	public static CustomLogicVector3Builtin Min(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x3FD48E0", Offset = "0x3FD48E0", VA = "0x3FD48E0")]
	public static CustomLogicVector3Builtin MoveTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxDistanceDelta)
	{
		return null;
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x3FD4B20", Offset = "0x3FD4B20", VA = "0x3FD4B20")]
	public static CustomLogicVector3Builtin Normalize(CustomLogicVector3Builtin value)
	{
		return null;
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x3FD4CF0", Offset = "0x3FD4CF0", VA = "0x3FD4CF0")]
	public static void OrthoNormalize(CustomLogicVector3Builtin normal, CustomLogicVector3Builtin tangent)
	{
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x3FD4D10", Offset = "0x3FD4D10", VA = "0x3FD4D10")]
	public static CustomLogicVector3Builtin Project(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x3FD4EE0", Offset = "0x3FD4EE0", VA = "0x3FD4EE0")]
	public static CustomLogicVector3Builtin ProjectOnPlane(CustomLogicVector3Builtin vector, CustomLogicVector3Builtin plane)
	{
		return null;
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x3FD5080", Offset = "0x3FD5080", VA = "0x3FD5080")]
	public static CustomLogicVector3Builtin Reflect(CustomLogicVector3Builtin inDirection, CustomLogicVector3Builtin inNormal)
	{
		return null;
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x3FD51E0", Offset = "0x3FD51E0", VA = "0x3FD51E0")]
	public static CustomLogicVector3Builtin RotateTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return null;
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x3FD52C0", Offset = "0x3FD52C0", VA = "0x3FD52C0")]
	public static float SignedAngle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to, CustomLogicVector3Builtin axis)
	{
		return default(float);
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x3FD5300", Offset = "0x3FD5300", VA = "0x3FD5300")]
	public static CustomLogicVector3Builtin Slerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x3FD53D0", Offset = "0x3FD53D0", VA = "0x3FD53D0")]
	public static CustomLogicVector3Builtin SlerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x3FD54A0", Offset = "0x3FD54A0", VA = "0x3FD54A0")]
	public static CustomLogicVector3Builtin SmoothDamp(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, CustomLogicVector3Builtin currentVelocity, float smoothTime, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x3FD55D0", Offset = "0x3FD55D0", VA = "0x3FD55D0")]
	public void Set(float x, float y, float z)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x3FD55E0", Offset = "0x3FD55E0", VA = "0x3FD55E0")]
	[Obsolete("Use multiply operator instead")]
	public CustomLogicVector3Builtin Scale(object scale)
	{
		return null;
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x3FD5810", Offset = "0x3FD5810", VA = "0x3FD5810")]
	[Obsolete("Use multiply operator instead")]
	public static CustomLogicVector3Builtin Multiply(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x3FD5940", Offset = "0x3FD5940", VA = "0x3FD5940")]
	[Obsolete("Use divide operator instead")]
	public static CustomLogicVector3Builtin Divide(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x3FD5A70", Offset = "0x3FD5A70", VA = "0x3FD5A70")]
	public static CustomLogicVector3Builtin GetRotationDirection(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x3FD5B60", Offset = "0x3FD5B60", VA = "0x3FD5B60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x3FD5B70", Offset = "0x3FD5B70", VA = "0x3FD5B70", Slot = "16")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x3FD5C00", Offset = "0x3FD5C00", VA = "0x3FD5C00", Slot = "9")]
	public object __Add__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x3FD5D60", Offset = "0x3FD5D60", VA = "0x3FD5D60", Slot = "10")]
	public object __Sub__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x3FD5EC0", Offset = "0x3FD5EC0", VA = "0x3FD5EC0", Slot = "11")]
	public object __Mul__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x3FD6210", Offset = "0x3FD6210", VA = "0x3FD6210", Slot = "12")]
	public object __Div__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x3FD6480", Offset = "0x3FD6480", VA = "0x3FD6480", Slot = "14")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x3FD6550", Offset = "0x3FD6550", VA = "0x3FD6550", Slot = "15")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x3FD6590", Offset = "0x3FD6590", VA = "0x3FD6590", Slot = "13")]
	public object __Mod__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x3FD65D0", Offset = "0x3FD65D0", VA = "0x3FD65D0")]
	public static implicit operator Vector3(CustomLogicVector3Builtin v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x3FD35B0", Offset = "0x3FD35B0", VA = "0x3FD35B0")]
	public static implicit operator CustomLogicVector3Builtin(Vector3 v)
	{
		return null;
	}
}
