using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20002B0")]
[CompilerGenerated]
internal class CustomLogicLightBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002B1")]
	public static class Factory
	{
		[Token(Token = "0x6001209")]
		[Address(RVA = "0x3CE58E0", Offset = "0x3CE58E0", VA = "0x3CE58E0")]
		public static CustomLogicLightBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002B2")]
	public static class Bindings
	{
		[Token(Token = "0x4000DFA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600120A")]
		[Address(RVA = "0x3CE59D0", Offset = "0x3CE59D0", VA = "0x3CE59D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600120B")]
		[Address(RVA = "0x3CE5FF0", Offset = "0x3CE5FF0", VA = "0x3CE5FF0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeDirectional()
		{
			return null;
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x3CE6090", Offset = "0x3CE6090", VA = "0x3CE6090")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypePoint()
		{
			return null;
		}

		[Token(Token = "0x600120D")]
		[Address(RVA = "0x3CE6130", Offset = "0x3CE6130", VA = "0x3CE6130")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeSpot()
		{
			return null;
		}

		[Token(Token = "0x600120E")]
		[Address(RVA = "0x3CE61D0", Offset = "0x3CE61D0", VA = "0x3CE61D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeNone()
		{
			return null;
		}

		[Token(Token = "0x600120F")]
		[Address(RVA = "0x3CE6270", Offset = "0x3CE6270", VA = "0x3CE6270")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeHard()
		{
			return null;
		}

		[Token(Token = "0x6001210")]
		[Address(RVA = "0x3CE6310", Offset = "0x3CE6310", VA = "0x3CE6310")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeSoft()
		{
			return null;
		}

		[Token(Token = "0x6001211")]
		[Address(RVA = "0x3CE63B0", Offset = "0x3CE63B0", VA = "0x3CE63B0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__TypeOfLight()
		{
			return null;
		}

		[Token(Token = "0x6001212")]
		[Address(RVA = "0x3CE6490", Offset = "0x3CE6490", VA = "0x3CE6490")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Range()
		{
			return null;
		}

		[Token(Token = "0x6001213")]
		[Address(RVA = "0x3CE6570", Offset = "0x3CE6570", VA = "0x3CE6570")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__SpotAngle()
		{
			return null;
		}

		[Token(Token = "0x6001214")]
		[Address(RVA = "0x3CE6650", Offset = "0x3CE6650", VA = "0x3CE6650")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Color()
		{
			return null;
		}

		[Token(Token = "0x6001215")]
		[Address(RVA = "0x3CE6730", Offset = "0x3CE6730", VA = "0x3CE6730")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Intensity()
		{
			return null;
		}

		[Token(Token = "0x6001216")]
		[Address(RVA = "0x3CE6810", Offset = "0x3CE6810", VA = "0x3CE6810")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__BounceIntensity()
		{
			return null;
		}

		[Token(Token = "0x6001217")]
		[Address(RVA = "0x3CE68F0", Offset = "0x3CE68F0", VA = "0x3CE68F0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowType()
		{
			return null;
		}

		[Token(Token = "0x6001218")]
		[Address(RVA = "0x3CE69D0", Offset = "0x3CE69D0", VA = "0x3CE69D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowStrength()
		{
			return null;
		}

		[Token(Token = "0x6001219")]
		[Address(RVA = "0x3CE6AB0", Offset = "0x3CE6AB0", VA = "0x3CE6AB0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__WeatherControlled()
		{
			return null;
		}
	}

	[Token(Token = "0x4000DF6")]
	[FieldOffset(Offset = "0x38")]
	public MapLight Value;

	[Token(Token = "0x4000DF7")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000DF8")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x4000DF9")]
	[FieldOffset(Offset = "0x50")]
	private bool _weatherControlled;

	[Token(Token = "0x17000212")]
	public static int LightTypeDirectional
	{
		[Token(Token = "0x60011ED")]
		[Address(RVA = "0x3CE5410", Offset = "0x3CE5410", VA = "0x3CE5410")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000213")]
	public static int LightTypePoint
	{
		[Token(Token = "0x60011EE")]
		[Address(RVA = "0x3CE5420", Offset = "0x3CE5420", VA = "0x3CE5420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000214")]
	public static int LightTypeSpot
	{
		[Token(Token = "0x60011EF")]
		[Address(RVA = "0x3CE5430", Offset = "0x3CE5430", VA = "0x3CE5430")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000215")]
	public static int ShadowTypeNone
	{
		[Token(Token = "0x60011F0")]
		[Address(RVA = "0x3CE5440", Offset = "0x3CE5440", VA = "0x3CE5440")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000216")]
	public static int ShadowTypeHard
	{
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x3CE5450", Offset = "0x3CE5450", VA = "0x3CE5450")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000217")]
	public static int ShadowTypeSoft
	{
		[Token(Token = "0x60011F2")]
		[Address(RVA = "0x3CE5460", Offset = "0x3CE5460", VA = "0x3CE5460")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000218")]
	public int TypeOfLight
	{
		[Token(Token = "0x60011F3")]
		[Address(RVA = "0x3CE5470", Offset = "0x3CE5470", VA = "0x3CE5470")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011F4")]
		[Address(RVA = "0x3CE5490", Offset = "0x3CE5490", VA = "0x3CE5490")]
		set
		{
		}
	}

	[Token(Token = "0x17000219")]
	public float Range
	{
		[Token(Token = "0x60011F5")]
		[Address(RVA = "0x3CE54B0", Offset = "0x3CE54B0", VA = "0x3CE54B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011F6")]
		[Address(RVA = "0x3CE54D0", Offset = "0x3CE54D0", VA = "0x3CE54D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public float SpotAngle
	{
		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x3CE54F0", Offset = "0x3CE54F0", VA = "0x3CE54F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011F8")]
		[Address(RVA = "0x3CE5510", Offset = "0x3CE5510", VA = "0x3CE5510")]
		set
		{
		}
	}

	[Token(Token = "0x1700021B")]
	public CustomLogicColorBuiltin Color
	{
		[Token(Token = "0x60011F9")]
		[Address(RVA = "0x3CE5530", Offset = "0x3CE5530", VA = "0x3CE5530")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011FA")]
		[Address(RVA = "0x3CE55B0", Offset = "0x3CE55B0", VA = "0x3CE55B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021C")]
	public float Intensity
	{
		[Token(Token = "0x60011FB")]
		[Address(RVA = "0x3CE55F0", Offset = "0x3CE55F0", VA = "0x3CE55F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011FC")]
		[Address(RVA = "0x3CE5610", Offset = "0x3CE5610", VA = "0x3CE5610")]
		set
		{
		}
	}

	[Token(Token = "0x1700021D")]
	public float BounceIntensity
	{
		[Token(Token = "0x60011FD")]
		[Address(RVA = "0x3CE5630", Offset = "0x3CE5630", VA = "0x3CE5630")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60011FE")]
		[Address(RVA = "0x3CE5650", Offset = "0x3CE5650", VA = "0x3CE5650")]
		set
		{
		}
	}

	[Token(Token = "0x1700021E")]
	public int ShadowType
	{
		[Token(Token = "0x60011FF")]
		[Address(RVA = "0x3CE5670", Offset = "0x3CE5670", VA = "0x3CE5670")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001200")]
		[Address(RVA = "0x3CE5690", Offset = "0x3CE5690", VA = "0x3CE5690")]
		set
		{
		}
	}

	[Token(Token = "0x1700021F")]
	public float ShadowStrength
	{
		[Token(Token = "0x6001201")]
		[Address(RVA = "0x3CE56B0", Offset = "0x3CE56B0", VA = "0x3CE56B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001202")]
		[Address(RVA = "0x3CE56D0", Offset = "0x3CE56D0", VA = "0x3CE56D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000220")]
	public bool WeatherControlled
	{
		[Token(Token = "0x6001203")]
		[Address(RVA = "0x3CE56F0", Offset = "0x3CE56F0", VA = "0x3CE56F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001204")]
		[Address(RVA = "0x3CE5700", Offset = "0x3CE5700", VA = "0x3CE5700")]
		set
		{
		}
	}

	[Token(Token = "0x17000221")]
	public override string ClassName
	{
		[Token(Token = "0x6001205")]
		[Address(RVA = "0x3CE5880", Offset = "0x3CE5880", VA = "0x3CE5880", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000222")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001206")]
		[Address(RVA = "0x3CE58B0", Offset = "0x3CE58B0", VA = "0x3CE58B0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000223")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001207")]
		[Address(RVA = "0x3CE58C0", Offset = "0x3CE58C0", VA = "0x3CE58C0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000224")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001208")]
		[Address(RVA = "0x3CE58D0", Offset = "0x3CE58D0", VA = "0x3CE58D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x3CE51F0", Offset = "0x3CE51F0", VA = "0x3CE51F0")]
	public CustomLogicLightBuiltin()
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x3CE5200", Offset = "0x3CE5200", VA = "0x3CE5200")]
	public CustomLogicLightBuiltin(CustomLogicMapObjectBuiltin owner, LightType type)
	{
	}
}
