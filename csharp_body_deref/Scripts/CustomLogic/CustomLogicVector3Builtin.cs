using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000298")]
[CompilerGenerated]
internal class CustomLogicVector3Builtin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x2000299")]
	public static class Factory
	{
		[Token(Token = "0x600105B")]
		[Address(RVA = "0x3CD0BB0", Offset = "0x3CD0BB0", VA = "0x3CD0BB0")]
		public static CustomLogicVector3Builtin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200029A")]
	public static class Bindings
	{
		[Token(Token = "0x4000D91")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600105C")]
		[Address(RVA = "0x3CD0F60", Offset = "0x3CD0F60", VA = "0x3CD0F60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600105D")]
		[Address(RVA = "0x3CD20F0", Offset = "0x3CD20F0", VA = "0x3CD20F0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__X()
		{
			return null;
		}

		[Token(Token = "0x600105E")]
		[Address(RVA = "0x3CD21D0", Offset = "0x3CD21D0", VA = "0x3CD21D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Y()
		{
			return null;
		}

		[Token(Token = "0x600105F")]
		[Address(RVA = "0x3CD22B0", Offset = "0x3CD22B0", VA = "0x3CD22B0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Z()
		{
			return null;
		}

		[Token(Token = "0x6001060")]
		[Address(RVA = "0x3CD2390", Offset = "0x3CD2390", VA = "0x3CD2390")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Normalized()
		{
			return null;
		}

		[Token(Token = "0x6001061")]
		[Address(RVA = "0x3CD2430", Offset = "0x3CD2430", VA = "0x3CD2430")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Magnitude()
		{
			return null;
		}

		[Token(Token = "0x6001062")]
		[Address(RVA = "0x3CD24D0", Offset = "0x3CD24D0", VA = "0x3CD24D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__SqrMagnitude()
		{
			return null;
		}

		[Token(Token = "0x6001063")]
		[Address(RVA = "0x3CD2570", Offset = "0x3CD2570", VA = "0x3CD2570")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Zero()
		{
			return null;
		}

		[Token(Token = "0x6001064")]
		[Address(RVA = "0x3CD2610", Offset = "0x3CD2610", VA = "0x3CD2610")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__One()
		{
			return null;
		}

		[Token(Token = "0x6001065")]
		[Address(RVA = "0x3CD26B0", Offset = "0x3CD26B0", VA = "0x3CD26B0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Up()
		{
			return null;
		}

		[Token(Token = "0x6001066")]
		[Address(RVA = "0x3CD2750", Offset = "0x3CD2750", VA = "0x3CD2750")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Down()
		{
			return null;
		}

		[Token(Token = "0x6001067")]
		[Address(RVA = "0x3CD27F0", Offset = "0x3CD27F0", VA = "0x3CD27F0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Left()
		{
			return null;
		}

		[Token(Token = "0x6001068")]
		[Address(RVA = "0x3CD2890", Offset = "0x3CD2890", VA = "0x3CD2890")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Right()
		{
			return null;
		}

		[Token(Token = "0x6001069")]
		[Address(RVA = "0x3CD2930", Offset = "0x3CD2930", VA = "0x3CD2930")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Forward()
		{
			return null;
		}

		[Token(Token = "0x600106A")]
		[Address(RVA = "0x3CD29D0", Offset = "0x3CD29D0", VA = "0x3CD29D0")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__Back()
		{
			return null;
		}

		[Token(Token = "0x600106B")]
		[Address(RVA = "0x3CD2A70", Offset = "0x3CD2A70", VA = "0x3CD2A70")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__NegativeInfinity()
		{
			return null;
		}

		[Token(Token = "0x600106C")]
		[Address(RVA = "0x3CD2B10", Offset = "0x3CD2B10", VA = "0x3CD2B10")]
		public static CLPropertyBinding<CustomLogicVector3Builtin> __CreatePropertyBinding__PositiveInfinity()
		{
			return null;
		}

		[Token(Token = "0x600106D")]
		[Address(RVA = "0x3CD2BB0", Offset = "0x3CD2BB0", VA = "0x3CD2BB0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Angle()
		{
			return null;
		}

		[Token(Token = "0x600106E")]
		[Address(RVA = "0x3CD2D00", Offset = "0x3CD2D00", VA = "0x3CD2D00")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ClampMagnitude()
		{
			return null;
		}

		[Token(Token = "0x600106F")]
		[Address(RVA = "0x3CD2E50", Offset = "0x3CD2E50", VA = "0x3CD2E50")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Cross()
		{
			return null;
		}

		[Token(Token = "0x6001070")]
		[Address(RVA = "0x3CD2FA0", Offset = "0x3CD2FA0", VA = "0x3CD2FA0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Distance()
		{
			return null;
		}

		[Token(Token = "0x6001071")]
		[Address(RVA = "0x3CD30F0", Offset = "0x3CD30F0", VA = "0x3CD30F0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Dot()
		{
			return null;
		}

		[Token(Token = "0x6001072")]
		[Address(RVA = "0x3CD3240", Offset = "0x3CD3240", VA = "0x3CD3240")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Lerp()
		{
			return null;
		}

		[Token(Token = "0x6001073")]
		[Address(RVA = "0x3CD3390", Offset = "0x3CD3390", VA = "0x3CD3390")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__LerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6001074")]
		[Address(RVA = "0x3CD34E0", Offset = "0x3CD34E0", VA = "0x3CD34E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Max()
		{
			return null;
		}

		[Token(Token = "0x6001075")]
		[Address(RVA = "0x3CD3630", Offset = "0x3CD3630", VA = "0x3CD3630")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Min()
		{
			return null;
		}

		[Token(Token = "0x6001076")]
		[Address(RVA = "0x3CD3780", Offset = "0x3CD3780", VA = "0x3CD3780")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__MoveTowards()
		{
			return null;
		}

		[Token(Token = "0x6001077")]
		[Address(RVA = "0x3CD38D0", Offset = "0x3CD38D0", VA = "0x3CD38D0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Normalize()
		{
			return null;
		}

		[Token(Token = "0x6001078")]
		[Address(RVA = "0x3CD3A20", Offset = "0x3CD3A20", VA = "0x3CD3A20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__OrthoNormalize()
		{
			return null;
		}

		[Token(Token = "0x6001079")]
		[Address(RVA = "0x3CD3B70", Offset = "0x3CD3B70", VA = "0x3CD3B70")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Project()
		{
			return null;
		}

		[Token(Token = "0x600107A")]
		[Address(RVA = "0x3CD3CC0", Offset = "0x3CD3CC0", VA = "0x3CD3CC0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__ProjectOnPlane()
		{
			return null;
		}

		[Token(Token = "0x600107B")]
		[Address(RVA = "0x3CD3E10", Offset = "0x3CD3E10", VA = "0x3CD3E10")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Reflect()
		{
			return null;
		}

		[Token(Token = "0x600107C")]
		[Address(RVA = "0x3CD3F60", Offset = "0x3CD3F60", VA = "0x3CD3F60")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__RotateTowards()
		{
			return null;
		}

		[Token(Token = "0x600107D")]
		[Address(RVA = "0x3CD40B0", Offset = "0x3CD40B0", VA = "0x3CD40B0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SignedAngle()
		{
			return null;
		}

		[Token(Token = "0x600107E")]
		[Address(RVA = "0x3CD4200", Offset = "0x3CD4200", VA = "0x3CD4200")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Slerp()
		{
			return null;
		}

		[Token(Token = "0x600107F")]
		[Address(RVA = "0x3CD4350", Offset = "0x3CD4350", VA = "0x3CD4350")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SlerpUnclamped()
		{
			return null;
		}

		[Token(Token = "0x6001080")]
		[Address(RVA = "0x3CD44A0", Offset = "0x3CD44A0", VA = "0x3CD44A0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__SmoothDamp()
		{
			return null;
		}

		[Token(Token = "0x6001081")]
		[Address(RVA = "0x3CD45F0", Offset = "0x3CD45F0", VA = "0x3CD45F0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Set()
		{
			return null;
		}

		[Token(Token = "0x6001082")]
		[Address(RVA = "0x3CD4740", Offset = "0x3CD4740", VA = "0x3CD4740")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Scale()
		{
			return null;
		}

		[Token(Token = "0x6001083")]
		[Address(RVA = "0x3CD4890", Offset = "0x3CD4890", VA = "0x3CD4890")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Multiply()
		{
			return null;
		}

		[Token(Token = "0x6001084")]
		[Address(RVA = "0x3CD49E0", Offset = "0x3CD49E0", VA = "0x3CD49E0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__Divide()
		{
			return null;
		}

		[Token(Token = "0x6001085")]
		[Address(RVA = "0x3CD4B30", Offset = "0x3CD4B30", VA = "0x3CD4B30")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding__GetRotationDirection()
		{
			return null;
		}

		[Token(Token = "0x6001086")]
		[Address(RVA = "0x3CD4C80", Offset = "0x3CD4C80", VA = "0x3CD4C80")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Copy__()
		{
			return null;
		}

		[Token(Token = "0x6001087")]
		[Address(RVA = "0x3CD4DD0", Offset = "0x3CD4DD0", VA = "0x3CD4DD0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Add__()
		{
			return null;
		}

		[Token(Token = "0x6001088")]
		[Address(RVA = "0x3CD4F20", Offset = "0x3CD4F20", VA = "0x3CD4F20")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Sub__()
		{
			return null;
		}

		[Token(Token = "0x6001089")]
		[Address(RVA = "0x3CD5070", Offset = "0x3CD5070", VA = "0x3CD5070")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Mul__()
		{
			return null;
		}

		[Token(Token = "0x600108A")]
		[Address(RVA = "0x3CD51C0", Offset = "0x3CD51C0", VA = "0x3CD51C0")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Div__()
		{
			return null;
		}

		[Token(Token = "0x600108B")]
		[Address(RVA = "0x3CD5310", Offset = "0x3CD5310", VA = "0x3CD5310")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Eq__()
		{
			return null;
		}

		[Token(Token = "0x600108C")]
		[Address(RVA = "0x3CD5460", Offset = "0x3CD5460", VA = "0x3CD5460")]
		public static CLMethodBinding<CustomLogicVector3Builtin> __CreateMethodBinding____Hash__()
		{
			return null;
		}
	}

	[Token(Token = "0x4000D90")]
	[FieldOffset(Offset = "0x30")]
	public Vector3 Value;

	[Token(Token = "0x170001D2")]
	public float X
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x3CCDB40", Offset = "0x3CCDB40", VA = "0x3CCDB40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x3CCDB50", Offset = "0x3CCDB50", VA = "0x3CCDB50")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public float Y
	{
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x3CCDB60", Offset = "0x3CCDB60", VA = "0x3CCDB60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001023")]
		[Address(RVA = "0x3CCDB70", Offset = "0x3CCDB70", VA = "0x3CCDB70")]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public float Z
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x3CCDB80", Offset = "0x3CCDB80", VA = "0x3CCDB80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001025")]
		[Address(RVA = "0x3CCDB90", Offset = "0x3CCDB90", VA = "0x3CCDB90")]
		set
		{
		}
	}

	[Token(Token = "0x170001D5")]
	public CustomLogicVector3Builtin Normalized
	{
		[Token(Token = "0x6001026")]
		[Address(RVA = "0x3CCDBA0", Offset = "0x3CCDBA0", VA = "0x3CCDBA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D6")]
	public float Magnitude
	{
		[Token(Token = "0x6001027")]
		[Address(RVA = "0x3CCDD50", Offset = "0x3CCDD50", VA = "0x3CCDD50")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D7")]
	public float SqrMagnitude
	{
		[Token(Token = "0x6001028")]
		[Address(RVA = "0x3CCDDE0", Offset = "0x3CCDDE0", VA = "0x3CCDDE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001D8")]
	public static CustomLogicVector3Builtin Zero
	{
		[Token(Token = "0x6001029")]
		[Address(RVA = "0x3CCDE00", Offset = "0x3CCDE00", VA = "0x3CCDE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	public static CustomLogicVector3Builtin One
	{
		[Token(Token = "0x600102A")]
		[Address(RVA = "0x3CCDEC0", Offset = "0x3CCDEC0", VA = "0x3CCDEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	public static CustomLogicVector3Builtin Up
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x3CCDF80", Offset = "0x3CCDF80", VA = "0x3CCDF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	public static CustomLogicVector3Builtin Down
	{
		[Token(Token = "0x600102C")]
		[Address(RVA = "0x3CCE040", Offset = "0x3CCE040", VA = "0x3CCE040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DC")]
	public static CustomLogicVector3Builtin Left
	{
		[Token(Token = "0x600102D")]
		[Address(RVA = "0x3CCE100", Offset = "0x3CCE100", VA = "0x3CCE100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DD")]
	public static CustomLogicVector3Builtin Right
	{
		[Token(Token = "0x600102E")]
		[Address(RVA = "0x3CCE1C0", Offset = "0x3CCE1C0", VA = "0x3CCE1C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	public static CustomLogicVector3Builtin Forward
	{
		[Token(Token = "0x600102F")]
		[Address(RVA = "0x3CCE280", Offset = "0x3CCE280", VA = "0x3CCE280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DF")]
	public static CustomLogicVector3Builtin Back
	{
		[Token(Token = "0x6001030")]
		[Address(RVA = "0x3CCE340", Offset = "0x3CCE340", VA = "0x3CCE340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E0")]
	public static CustomLogicVector3Builtin NegativeInfinity
	{
		[Token(Token = "0x6001031")]
		[Address(RVA = "0x3CCE400", Offset = "0x3CCE400", VA = "0x3CCE400")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E1")]
	public static CustomLogicVector3Builtin PositiveInfinity
	{
		[Token(Token = "0x6001032")]
		[Address(RVA = "0x3CCE4C0", Offset = "0x3CCE4C0", VA = "0x3CCE4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E2")]
	public override string ClassName
	{
		[Token(Token = "0x6001057")]
		[Address(RVA = "0x3CD0B50", Offset = "0x3CD0B50", VA = "0x3CD0B50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001058")]
		[Address(RVA = "0x3CD0B80", Offset = "0x3CD0B80", VA = "0x3CD0B80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001059")]
		[Address(RVA = "0x3CD0B90", Offset = "0x3CD0B90", VA = "0x3CD0B90", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600105A")]
		[Address(RVA = "0x3CD0BA0", Offset = "0x3CD0BA0", VA = "0x3CD0BA0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600101B")]
	[Address(RVA = "0x3CCD970", Offset = "0x3CCD970", VA = "0x3CCD970")]
	public CustomLogicVector3Builtin()
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x3CCD9D0", Offset = "0x3CCD9D0", VA = "0x3CCD9D0")]
	public CustomLogicVector3Builtin(float xyz)
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x3CCDA40", Offset = "0x3CCDA40", VA = "0x3CCDA40")]
	public CustomLogicVector3Builtin(float x, float y)
	{
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x3CCDAC0", Offset = "0x3CCDAC0", VA = "0x3CCDAC0")]
	public CustomLogicVector3Builtin(float x, float y, float z)
	{
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x3CBFCC0", Offset = "0x3CBFCC0", VA = "0x3CBFCC0")]
	public CustomLogicVector3Builtin(Vector3 value)
	{
	}

	[Token(Token = "0x6001033")]
	[Address(RVA = "0x3CCE580", Offset = "0x3CCE580", VA = "0x3CCE580")]
	public static float Angle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to)
	{
		return default(float);
	}

	[Token(Token = "0x6001034")]
	[Address(RVA = "0x3CCE760", Offset = "0x3CCE760", VA = "0x3CCE760")]
	public static CustomLogicVector3Builtin ClampMagnitude(CustomLogicVector3Builtin vector, float maxLength)
	{
		return null;
	}

	[Token(Token = "0x6001035")]
	[Address(RVA = "0x3CCE900", Offset = "0x3CCE900", VA = "0x3CCE900")]
	public static CustomLogicVector3Builtin Cross(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x3CCEA80", Offset = "0x3CCEA80", VA = "0x3CCEA80")]
	public static float Distance(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x3CCEB60", Offset = "0x3CCEB60", VA = "0x3CCEB60")]
	public static float Dot(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return default(float);
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x3CCEBA0", Offset = "0x3CCEBA0", VA = "0x3CCEBA0")]
	public static CustomLogicVector3Builtin Lerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x3CCECF0", Offset = "0x3CCECF0", VA = "0x3CCECF0")]
	public static CustomLogicVector3Builtin LerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x3CCEE20", Offset = "0x3CCEE20", VA = "0x3CCEE20")]
	public static CustomLogicVector3Builtin Max(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x3CCEF00", Offset = "0x3CCEF00", VA = "0x3CCEF00")]
	public static CustomLogicVector3Builtin Min(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x3CCEFE0", Offset = "0x3CCEFE0", VA = "0x3CCEFE0")]
	public static CustomLogicVector3Builtin MoveTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxDistanceDelta)
	{
		return null;
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x3CCF220", Offset = "0x3CCF220", VA = "0x3CCF220")]
	public static CustomLogicVector3Builtin Normalize(CustomLogicVector3Builtin value)
	{
		return null;
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x3CCF3F0", Offset = "0x3CCF3F0", VA = "0x3CCF3F0")]
	public static void OrthoNormalize(CustomLogicVector3Builtin normal, CustomLogicVector3Builtin tangent)
	{
	}

	[Token(Token = "0x600103F")]
	[Address(RVA = "0x3CCF410", Offset = "0x3CCF410", VA = "0x3CCF410")]
	public static CustomLogicVector3Builtin Project(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x3CCF5E0", Offset = "0x3CCF5E0", VA = "0x3CCF5E0")]
	public static CustomLogicVector3Builtin ProjectOnPlane(CustomLogicVector3Builtin vector, CustomLogicVector3Builtin plane)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	[Address(RVA = "0x3CCF780", Offset = "0x3CCF780", VA = "0x3CCF780")]
	public static CustomLogicVector3Builtin Reflect(CustomLogicVector3Builtin inDirection, CustomLogicVector3Builtin inNormal)
	{
		return null;
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0x3CCF8E0", Offset = "0x3CCF8E0", VA = "0x3CCF8E0")]
	public static CustomLogicVector3Builtin RotateTowards(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, float maxRadiansDelta, float maxMagnitudeDelta)
	{
		return null;
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x3CCF9C0", Offset = "0x3CCF9C0", VA = "0x3CCF9C0")]
	public static float SignedAngle(CustomLogicVector3Builtin from, CustomLogicVector3Builtin to, CustomLogicVector3Builtin axis)
	{
		return default(float);
	}

	[Token(Token = "0x6001044")]
	[Address(RVA = "0x3CCFA00", Offset = "0x3CCFA00", VA = "0x3CCFA00")]
	public static CustomLogicVector3Builtin Slerp(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x3CCFAD0", Offset = "0x3CCFAD0", VA = "0x3CCFAD0")]
	public static CustomLogicVector3Builtin SlerpUnclamped(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b, float t)
	{
		return null;
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x3CCFBA0", Offset = "0x3CCFBA0", VA = "0x3CCFBA0")]
	public static CustomLogicVector3Builtin SmoothDamp(CustomLogicVector3Builtin current, CustomLogicVector3Builtin target, CustomLogicVector3Builtin currentVelocity, float smoothTime, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x3CCFCD0", Offset = "0x3CCFCD0", VA = "0x3CCFCD0")]
	public void Set(float x, float y, float z)
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x3CCFCE0", Offset = "0x3CCFCE0", VA = "0x3CCFCE0")]
	[Obsolete("Use multiply operator instead")]
	public CustomLogicVector3Builtin Scale(object scale)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x3CCFF10", Offset = "0x3CCFF10", VA = "0x3CCFF10")]
	[Obsolete("Use multiply operator instead")]
	public static CustomLogicVector3Builtin Multiply(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x600104A")]
	[Address(RVA = "0x3CD0040", Offset = "0x3CD0040", VA = "0x3CD0040")]
	[Obsolete("Use divide operator instead")]
	public static CustomLogicVector3Builtin Divide(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x600104B")]
	[Address(RVA = "0x3CD0170", Offset = "0x3CD0170", VA = "0x3CD0170")]
	public static CustomLogicVector3Builtin GetRotationDirection(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		return null;
	}

	[Token(Token = "0x600104C")]
	[Address(RVA = "0x3CD0260", Offset = "0x3CD0260", VA = "0x3CD0260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x3CB9750", Offset = "0x3CB9750", VA = "0x3CB9750", Slot = "16")]
	public object __Copy__()
	{
		return null;
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x3CD0270", Offset = "0x3CD0270", VA = "0x3CD0270", Slot = "9")]
	public object __Add__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x600104F")]
	[Address(RVA = "0x3CD03D0", Offset = "0x3CD03D0", VA = "0x3CD03D0", Slot = "10")]
	public object __Sub__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001050")]
	[Address(RVA = "0x3CD0530", Offset = "0x3CD0530", VA = "0x3CD0530", Slot = "11")]
	public object __Mul__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001051")]
	[Address(RVA = "0x3CD0880", Offset = "0x3CD0880", VA = "0x3CD0880", Slot = "12")]
	public object __Div__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001052")]
	[Address(RVA = "0x3CB99E0", Offset = "0x3CB99E0", VA = "0x3CB99E0", Slot = "14")]
	public bool __Eq__(object self, object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x3CB9B60", Offset = "0x3CB9B60", VA = "0x3CB9B60", Slot = "15")]
	public int __Hash__()
	{
		return default(int);
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x3CD0AF0", Offset = "0x3CD0AF0", VA = "0x3CD0AF0", Slot = "13")]
	public object __Mod__(object self, object other)
	{
		return null;
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x3CD0B30", Offset = "0x3CD0B30", VA = "0x3CD0B30")]
	public static implicit operator Vector3(CustomLogicVector3Builtin v)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x3CBF1B0", Offset = "0x3CBF1B0", VA = "0x3CBF1B0")]
	public static implicit operator CustomLogicVector3Builtin(Vector3 v)
	{
		return null;
	}
}
