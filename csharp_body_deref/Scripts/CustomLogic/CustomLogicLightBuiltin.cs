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

[Token(Token = "0x20002E9")]
[CompilerGenerated]
internal class CustomLogicLightBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x20002EA")]
	public static class Factory
	{
		[Token(Token = "0x60013B3")]
		[Address(RVA = "0x3FEB500", Offset = "0x3FEB500", VA = "0x3FEB500")]
		public static CustomLogicLightBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20002EB")]
	public static class Bindings
	{
		[Token(Token = "0x4000EE0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60013B4")]
		[Address(RVA = "0x3FEB5F0", Offset = "0x3FEB5F0", VA = "0x3FEB5F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60013B5")]
		[Address(RVA = "0x3FEBC10", Offset = "0x3FEBC10", VA = "0x3FEBC10")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeDirectional()
		{
			return null;
		}

		[Token(Token = "0x60013B6")]
		[Address(RVA = "0x3FEBCB0", Offset = "0x3FEBCB0", VA = "0x3FEBCB0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypePoint()
		{
			return null;
		}

		[Token(Token = "0x60013B7")]
		[Address(RVA = "0x3FEBD50", Offset = "0x3FEBD50", VA = "0x3FEBD50")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeSpot()
		{
			return null;
		}

		[Token(Token = "0x60013B8")]
		[Address(RVA = "0x3FEBDF0", Offset = "0x3FEBDF0", VA = "0x3FEBDF0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeNone()
		{
			return null;
		}

		[Token(Token = "0x60013B9")]
		[Address(RVA = "0x3FEBE90", Offset = "0x3FEBE90", VA = "0x3FEBE90")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeHard()
		{
			return null;
		}

		[Token(Token = "0x60013BA")]
		[Address(RVA = "0x3FEBF30", Offset = "0x3FEBF30", VA = "0x3FEBF30")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeSoft()
		{
			return null;
		}

		[Token(Token = "0x60013BB")]
		[Address(RVA = "0x3FEBFD0", Offset = "0x3FEBFD0", VA = "0x3FEBFD0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__TypeOfLight()
		{
			return null;
		}

		[Token(Token = "0x60013BC")]
		[Address(RVA = "0x3FEC0B0", Offset = "0x3FEC0B0", VA = "0x3FEC0B0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Range()
		{
			return null;
		}

		[Token(Token = "0x60013BD")]
		[Address(RVA = "0x3FEC190", Offset = "0x3FEC190", VA = "0x3FEC190")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__SpotAngle()
		{
			return null;
		}

		[Token(Token = "0x60013BE")]
		[Address(RVA = "0x3FEC270", Offset = "0x3FEC270", VA = "0x3FEC270")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Color()
		{
			return null;
		}

		[Token(Token = "0x60013BF")]
		[Address(RVA = "0x3FEC350", Offset = "0x3FEC350", VA = "0x3FEC350")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Intensity()
		{
			return null;
		}

		[Token(Token = "0x60013C0")]
		[Address(RVA = "0x3FEC430", Offset = "0x3FEC430", VA = "0x3FEC430")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__BounceIntensity()
		{
			return null;
		}

		[Token(Token = "0x60013C1")]
		[Address(RVA = "0x3FEC510", Offset = "0x3FEC510", VA = "0x3FEC510")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowType()
		{
			return null;
		}

		[Token(Token = "0x60013C2")]
		[Address(RVA = "0x3FEC5F0", Offset = "0x3FEC5F0", VA = "0x3FEC5F0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowStrength()
		{
			return null;
		}

		[Token(Token = "0x60013C3")]
		[Address(RVA = "0x3FEC6D0", Offset = "0x3FEC6D0", VA = "0x3FEC6D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__WeatherControlled()
		{
			return null;
		}
	}

	[Token(Token = "0x4000EDC")]
	[FieldOffset(Offset = "0x38")]
	public MapLight Value;

	[Token(Token = "0x4000EDD")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x4000EDE")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x4000EDF")]
	[FieldOffset(Offset = "0x50")]
	private bool _weatherControlled;

	[Token(Token = "0x1700026B")]
	public static int LightTypeDirectional
	{
		[Token(Token = "0x6001397")]
		[Address(RVA = "0x3FEB030", Offset = "0x3FEB030", VA = "0x3FEB030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026C")]
	public static int LightTypePoint
	{
		[Token(Token = "0x6001398")]
		[Address(RVA = "0x3FEB040", Offset = "0x3FEB040", VA = "0x3FEB040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026D")]
	public static int LightTypeSpot
	{
		[Token(Token = "0x6001399")]
		[Address(RVA = "0x3FEB050", Offset = "0x3FEB050", VA = "0x3FEB050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026E")]
	public static int ShadowTypeNone
	{
		[Token(Token = "0x600139A")]
		[Address(RVA = "0x3FEB060", Offset = "0x3FEB060", VA = "0x3FEB060")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026F")]
	public static int ShadowTypeHard
	{
		[Token(Token = "0x600139B")]
		[Address(RVA = "0x3FEB070", Offset = "0x3FEB070", VA = "0x3FEB070")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000270")]
	public static int ShadowTypeSoft
	{
		[Token(Token = "0x600139C")]
		[Address(RVA = "0x3FEB080", Offset = "0x3FEB080", VA = "0x3FEB080")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000271")]
	public int TypeOfLight
	{
		[Token(Token = "0x600139D")]
		[Address(RVA = "0x3FEB090", Offset = "0x3FEB090", VA = "0x3FEB090")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600139E")]
		[Address(RVA = "0x3FEB0B0", Offset = "0x3FEB0B0", VA = "0x3FEB0B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000272")]
	public float Range
	{
		[Token(Token = "0x600139F")]
		[Address(RVA = "0x3FEB0D0", Offset = "0x3FEB0D0", VA = "0x3FEB0D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013A0")]
		[Address(RVA = "0x3FEB0F0", Offset = "0x3FEB0F0", VA = "0x3FEB0F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000273")]
	public float SpotAngle
	{
		[Token(Token = "0x60013A1")]
		[Address(RVA = "0x3FEB110", Offset = "0x3FEB110", VA = "0x3FEB110")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013A2")]
		[Address(RVA = "0x3FEB130", Offset = "0x3FEB130", VA = "0x3FEB130")]
		set
		{
		}
	}

	[Token(Token = "0x17000274")]
	public CustomLogicColorBuiltin Color
	{
		[Token(Token = "0x60013A3")]
		[Address(RVA = "0x3FEB150", Offset = "0x3FEB150", VA = "0x3FEB150")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013A4")]
		[Address(RVA = "0x3FEB1D0", Offset = "0x3FEB1D0", VA = "0x3FEB1D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000275")]
	public float Intensity
	{
		[Token(Token = "0x60013A5")]
		[Address(RVA = "0x3FEB210", Offset = "0x3FEB210", VA = "0x3FEB210")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x3FEB230", Offset = "0x3FEB230", VA = "0x3FEB230")]
		set
		{
		}
	}

	[Token(Token = "0x17000276")]
	public float BounceIntensity
	{
		[Token(Token = "0x60013A7")]
		[Address(RVA = "0x3FEB250", Offset = "0x3FEB250", VA = "0x3FEB250")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x3FEB270", Offset = "0x3FEB270", VA = "0x3FEB270")]
		set
		{
		}
	}

	[Token(Token = "0x17000277")]
	public int ShadowType
	{
		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x3FEB290", Offset = "0x3FEB290", VA = "0x3FEB290")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x3FEB2B0", Offset = "0x3FEB2B0", VA = "0x3FEB2B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000278")]
	public float ShadowStrength
	{
		[Token(Token = "0x60013AB")]
		[Address(RVA = "0x3FEB2D0", Offset = "0x3FEB2D0", VA = "0x3FEB2D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60013AC")]
		[Address(RVA = "0x3FEB2F0", Offset = "0x3FEB2F0", VA = "0x3FEB2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000279")]
	public bool WeatherControlled
	{
		[Token(Token = "0x60013AD")]
		[Address(RVA = "0x3FEB310", Offset = "0x3FEB310", VA = "0x3FEB310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013AE")]
		[Address(RVA = "0x3FEB320", Offset = "0x3FEB320", VA = "0x3FEB320")]
		set
		{
		}
	}

	[Token(Token = "0x1700027A")]
	public override string ClassName
	{
		[Token(Token = "0x60013AF")]
		[Address(RVA = "0x3FEB4A0", Offset = "0x3FEB4A0", VA = "0x3FEB4A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60013B0")]
		[Address(RVA = "0x3FEB4D0", Offset = "0x3FEB4D0", VA = "0x3FEB4D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027C")]
	public override bool IsStatic
	{
		[Token(Token = "0x60013B1")]
		[Address(RVA = "0x3FEB4E0", Offset = "0x3FEB4E0", VA = "0x3FEB4E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60013B2")]
		[Address(RVA = "0x3FEB4F0", Offset = "0x3FEB4F0", VA = "0x3FEB4F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001395")]
	[Address(RVA = "0x3FEAE10", Offset = "0x3FEAE10", VA = "0x3FEAE10")]
	public CustomLogicLightBuiltin()
	{
	}

	[Token(Token = "0x6001396")]
	[Address(RVA = "0x3FEAE20", Offset = "0x3FEAE20", VA = "0x3FEAE20")]
	public CustomLogicLightBuiltin(CustomLogicMapObjectBuiltin owner, LightType type)
	{
	}
}
