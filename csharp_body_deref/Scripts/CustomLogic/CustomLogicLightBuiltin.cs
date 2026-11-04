// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLightBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLightBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Map;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000434")]
[CompilerGenerated]
internal class CustomLogicLightBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000435")]
	public static class Factory
	{
		[Token(Token = "0x6001C35")]
		[Address(RVA = "0x1F076B0", Offset = "0x1F05CB0", VA = "0x181F076B0")]
		public static CustomLogicLightBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000436")]
	public static class Bindings
	{
		[Token(Token = "0x4001500")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001C36")]
		[Address(RVA = "0x1EE9620", Offset = "0x1EE7C20", VA = "0x181EE9620")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001C37")]
		[Address(RVA = "0x1EFC790", Offset = "0x1EFAD90", VA = "0x181EFC790")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeDirectional()
		{
			return null;
		}

		[Token(Token = "0x6001C38")]
		[Address(RVA = "0x1EFC830", Offset = "0x1EFAE30", VA = "0x181EFC830")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypePoint()
		{
			return null;
		}

		[Token(Token = "0x6001C39")]
		[Address(RVA = "0x1EFC8D0", Offset = "0x1EFAED0", VA = "0x181EFC8D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeSpot()
		{
			return null;
		}

		[Token(Token = "0x6001C3A")]
		[Address(RVA = "0x1EFDBE0", Offset = "0x1EFC1E0", VA = "0x181EFDBE0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeNone()
		{
			return null;
		}

		[Token(Token = "0x6001C3B")]
		[Address(RVA = "0x1EFDB40", Offset = "0x1EFC140", VA = "0x181EFDB40")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeHard()
		{
			return null;
		}

		[Token(Token = "0x6001C3C")]
		[Address(RVA = "0x1EFDC80", Offset = "0x1EFC280", VA = "0x181EFDC80")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeSoft()
		{
			return null;
		}

		[Token(Token = "0x6001C3D")]
		[Address(RVA = "0x1EFE7C0", Offset = "0x1EFCDC0", VA = "0x181EFE7C0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__TypeOfLight()
		{
			return null;
		}

		[Token(Token = "0x6001C3E")]
		[Address(RVA = "0x1EFD550", Offset = "0x1EFBB50", VA = "0x181EFD550")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Range()
		{
			return null;
		}

		[Token(Token = "0x6001C3F")]
		[Address(RVA = "0x1EFE0E0", Offset = "0x1EFC6E0", VA = "0x181EFE0E0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__SpotAngle()
		{
			return null;
		}

		[Token(Token = "0x6001C40")]
		[Address(RVA = "0x1EFB2A0", Offset = "0x1EF98A0", VA = "0x181EFB2A0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Color()
		{
			return null;
		}

		[Token(Token = "0x6001C41")]
		[Address(RVA = "0x1EFC3D0", Offset = "0x1EFA9D0", VA = "0x181EFC3D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Intensity()
		{
			return null;
		}

		[Token(Token = "0x6001C42")]
		[Address(RVA = "0x1EFAAD0", Offset = "0x1EF90D0", VA = "0x181EFAAD0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__BounceIntensity()
		{
			return null;
		}

		[Token(Token = "0x6001C43")]
		[Address(RVA = "0x1EFDD20", Offset = "0x1EFC320", VA = "0x181EFDD20")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowType()
		{
			return null;
		}

		[Token(Token = "0x6001C44")]
		[Address(RVA = "0x1EFDA50", Offset = "0x1EFC050", VA = "0x181EFDA50")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowStrength()
		{
			return null;
		}

		[Token(Token = "0x6001C45")]
		[Address(RVA = "0x1EFEB30", Offset = "0x1EFD130", VA = "0x181EFEB30")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__WeatherControlled()
		{
			return null;
		}
	}

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x38")]
	public MapLight Value;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0x50")]
	private bool _weatherControlled;

	[Token(Token = "0x17000320")]
	public static int LightTypeDirectional
	{
		[Token(Token = "0x6001C19")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000321")]
	public static int LightTypePoint
	{
		[Token(Token = "0x6001C1A")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000322")]
	public static int LightTypeSpot
	{
		[Token(Token = "0x6001C1B")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000323")]
	public static int ShadowTypeNone
	{
		[Token(Token = "0x6001C1C")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000324")]
	public static int ShadowTypeHard
	{
		[Token(Token = "0x6001C1D")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000325")]
	public static int ShadowTypeSoft
	{
		[Token(Token = "0x6001C1E")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000326")]
	public int TypeOfLight
	{
		[Token(Token = "0x6001C1F")]
		[Address(RVA = "0x1F039E0", Offset = "0x1F01FE0", VA = "0x181F039E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001C20")]
		[Address(RVA = "0x1F03B80", Offset = "0x1F02180", VA = "0x181F03B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000327")]
	public float Range
	{
		[Token(Token = "0x6001C21")]
		[Address(RVA = "0x1F03920", Offset = "0x1F01F20", VA = "0x181F03920")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001C22")]
		[Address(RVA = "0x1F03AC0", Offset = "0x1F020C0", VA = "0x181F03AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000328")]
	public float SpotAngle
	{
		[Token(Token = "0x6001C23")]
		[Address(RVA = "0x1F039B0", Offset = "0x1F01FB0", VA = "0x181F039B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001C24")]
		[Address(RVA = "0x1F03B50", Offset = "0x1F02150", VA = "0x181F03B50")]
		set
		{
		}
	}

	[Token(Token = "0x17000329")]
	public CustomLogicColorBuiltin Color
	{
		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x1F03870", Offset = "0x1F01E70", VA = "0x181F03870")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C26")]
		[Address(RVA = "0x1F03A40", Offset = "0x1F02040", VA = "0x181F03A40")]
		set
		{
		}
	}

	[Token(Token = "0x1700032A")]
	public float Intensity
	{
		[Token(Token = "0x6001C27")]
		[Address(RVA = "0x1F03900", Offset = "0x1F01F00", VA = "0x181F03900")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001C28")]
		[Address(RVA = "0x1F03AA0", Offset = "0x1F020A0", VA = "0x181F03AA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700032B")]
	public float BounceIntensity
	{
		[Token(Token = "0x6001C29")]
		[Address(RVA = "0x1F03810", Offset = "0x1F01E10", VA = "0x181F03810")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001C2A")]
		[Address(RVA = "0x1F03A10", Offset = "0x1F02010", VA = "0x181F03A10")]
		set
		{
		}
	}

	[Token(Token = "0x1700032C")]
	public int ShadowType
	{
		[Token(Token = "0x6001C2B")]
		[Address(RVA = "0x1F03980", Offset = "0x1F01F80", VA = "0x181F03980")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001C2C")]
		[Address(RVA = "0x1F03B20", Offset = "0x1F02120", VA = "0x181F03B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700032D")]
	public float ShadowStrength
	{
		[Token(Token = "0x6001C2D")]
		[Address(RVA = "0x1F03950", Offset = "0x1F01F50", VA = "0x181F03950")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001C2E")]
		[Address(RVA = "0x1F03AF0", Offset = "0x1F020F0", VA = "0x181F03AF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700032E")]
	public bool WeatherControlled
	{
		[Token(Token = "0x6001C2F")]
		[Address(RVA = "0xC7FB40", Offset = "0xC7E140", VA = "0x180C7FB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x1F03BB0", Offset = "0x1F021B0", VA = "0x181F03BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700032F")]
	public override string ClassName
	{
		[Token(Token = "0x6001C31")]
		[Address(RVA = "0x1F03840", Offset = "0x1F01E40", VA = "0x181F03840", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000330")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001C32")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000331")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001C33")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000332")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001C34")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x1F01510", Offset = "0x1EFFB10", VA = "0x181F01510")]
	public CustomLogicLightBuiltin()
	{
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x1F035E0", Offset = "0x1F01BE0", VA = "0x181F035E0")]
	public CustomLogicLightBuiltin(CustomLogicMapObjectBuiltin owner, LightType type)
	{
	}
}
