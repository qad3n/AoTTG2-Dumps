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

[Token(Token = "0x2000493")]
[CompilerGenerated]
internal class CustomLogicLightBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000494")]
	public static class Factory
	{
		[Token(Token = "0x6001EAC")]
		[Address(RVA = "0x58F7600", Offset = "0x58F6600", VA = "0x58F7600")]
		public static CustomLogicLightBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000495")]
	public static class Bindings
	{
		[Token(Token = "0x40016A0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001EAD")]
		[Address(RVA = "0x58F76F0", Offset = "0x58F66F0", VA = "0x58F76F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001EAE")]
		[Address(RVA = "0x58F7D10", Offset = "0x58F6D10", VA = "0x58F7D10")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeDirectional()
		{
			return null;
		}

		[Token(Token = "0x6001EAF")]
		[Address(RVA = "0x58F7DB0", Offset = "0x58F6DB0", VA = "0x58F7DB0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypePoint()
		{
			return null;
		}

		[Token(Token = "0x6001EB0")]
		[Address(RVA = "0x58F7E50", Offset = "0x58F6E50", VA = "0x58F7E50")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__LightTypeSpot()
		{
			return null;
		}

		[Token(Token = "0x6001EB1")]
		[Address(RVA = "0x58F7EF0", Offset = "0x58F6EF0", VA = "0x58F7EF0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeNone()
		{
			return null;
		}

		[Token(Token = "0x6001EB2")]
		[Address(RVA = "0x58F7F90", Offset = "0x58F6F90", VA = "0x58F7F90")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeHard()
		{
			return null;
		}

		[Token(Token = "0x6001EB3")]
		[Address(RVA = "0x58F8030", Offset = "0x58F7030", VA = "0x58F8030")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowTypeSoft()
		{
			return null;
		}

		[Token(Token = "0x6001EB4")]
		[Address(RVA = "0x58F80D0", Offset = "0x58F70D0", VA = "0x58F80D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__TypeOfLight()
		{
			return null;
		}

		[Token(Token = "0x6001EB5")]
		[Address(RVA = "0x58F81B0", Offset = "0x58F71B0", VA = "0x58F81B0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Range()
		{
			return null;
		}

		[Token(Token = "0x6001EB6")]
		[Address(RVA = "0x58F8290", Offset = "0x58F7290", VA = "0x58F8290")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__SpotAngle()
		{
			return null;
		}

		[Token(Token = "0x6001EB7")]
		[Address(RVA = "0x58F8370", Offset = "0x58F7370", VA = "0x58F8370")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Color()
		{
			return null;
		}

		[Token(Token = "0x6001EB8")]
		[Address(RVA = "0x58F8450", Offset = "0x58F7450", VA = "0x58F8450")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__Intensity()
		{
			return null;
		}

		[Token(Token = "0x6001EB9")]
		[Address(RVA = "0x58F8530", Offset = "0x58F7530", VA = "0x58F8530")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__BounceIntensity()
		{
			return null;
		}

		[Token(Token = "0x6001EBA")]
		[Address(RVA = "0x58F8610", Offset = "0x58F7610", VA = "0x58F8610")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowType()
		{
			return null;
		}

		[Token(Token = "0x6001EBB")]
		[Address(RVA = "0x58F86F0", Offset = "0x58F76F0", VA = "0x58F86F0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__ShadowStrength()
		{
			return null;
		}

		[Token(Token = "0x6001EBC")]
		[Address(RVA = "0x58F87D0", Offset = "0x58F77D0", VA = "0x58F87D0")]
		public static CLPropertyBinding<CustomLogicLightBuiltin> __CreatePropertyBinding__WeatherControlled()
		{
			return null;
		}
	}

	[Token(Token = "0x400169C")]
	[FieldOffset(Offset = "0x38")]
	public MapLight Value;

	[Token(Token = "0x400169D")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x400169E")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x400169F")]
	[FieldOffset(Offset = "0x50")]
	private bool _weatherControlled;

	[Token(Token = "0x17000361")]
	public static int LightTypeDirectional
	{
		[Token(Token = "0x6001E90")]
		[Address(RVA = "0x58F7130", Offset = "0x58F6130", VA = "0x58F7130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000362")]
	public static int LightTypePoint
	{
		[Token(Token = "0x6001E91")]
		[Address(RVA = "0x58F7140", Offset = "0x58F6140", VA = "0x58F7140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000363")]
	public static int LightTypeSpot
	{
		[Token(Token = "0x6001E92")]
		[Address(RVA = "0x58F7150", Offset = "0x58F6150", VA = "0x58F7150")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000364")]
	public static int ShadowTypeNone
	{
		[Token(Token = "0x6001E93")]
		[Address(RVA = "0x58F7160", Offset = "0x58F6160", VA = "0x58F7160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000365")]
	public static int ShadowTypeHard
	{
		[Token(Token = "0x6001E94")]
		[Address(RVA = "0x58F7170", Offset = "0x58F6170", VA = "0x58F7170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000366")]
	public static int ShadowTypeSoft
	{
		[Token(Token = "0x6001E95")]
		[Address(RVA = "0x58F7180", Offset = "0x58F6180", VA = "0x58F7180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000367")]
	public int TypeOfLight
	{
		[Token(Token = "0x6001E96")]
		[Address(RVA = "0x58F7190", Offset = "0x58F6190", VA = "0x58F7190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001E97")]
		[Address(RVA = "0x58F71B0", Offset = "0x58F61B0", VA = "0x58F71B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000368")]
	public float Range
	{
		[Token(Token = "0x6001E98")]
		[Address(RVA = "0x58F71D0", Offset = "0x58F61D0", VA = "0x58F71D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E99")]
		[Address(RVA = "0x58F71F0", Offset = "0x58F61F0", VA = "0x58F71F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000369")]
	public float SpotAngle
	{
		[Token(Token = "0x6001E9A")]
		[Address(RVA = "0x58F7210", Offset = "0x58F6210", VA = "0x58F7210")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E9B")]
		[Address(RVA = "0x58F7230", Offset = "0x58F6230", VA = "0x58F7230")]
		set
		{
		}
	}

	[Token(Token = "0x1700036A")]
	public CustomLogicColorBuiltin Color
	{
		[Token(Token = "0x6001E9C")]
		[Address(RVA = "0x58F7250", Offset = "0x58F6250", VA = "0x58F7250")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001E9D")]
		[Address(RVA = "0x58F72D0", Offset = "0x58F62D0", VA = "0x58F72D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700036B")]
	public float Intensity
	{
		[Token(Token = "0x6001E9E")]
		[Address(RVA = "0x58F7310", Offset = "0x58F6310", VA = "0x58F7310")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001E9F")]
		[Address(RVA = "0x58F7330", Offset = "0x58F6330", VA = "0x58F7330")]
		set
		{
		}
	}

	[Token(Token = "0x1700036C")]
	public float BounceIntensity
	{
		[Token(Token = "0x6001EA0")]
		[Address(RVA = "0x58F7350", Offset = "0x58F6350", VA = "0x58F7350")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001EA1")]
		[Address(RVA = "0x58F7370", Offset = "0x58F6370", VA = "0x58F7370")]
		set
		{
		}
	}

	[Token(Token = "0x1700036D")]
	public int ShadowType
	{
		[Token(Token = "0x6001EA2")]
		[Address(RVA = "0x58F7390", Offset = "0x58F6390", VA = "0x58F7390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001EA3")]
		[Address(RVA = "0x58F73B0", Offset = "0x58F63B0", VA = "0x58F73B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700036E")]
	public float ShadowStrength
	{
		[Token(Token = "0x6001EA4")]
		[Address(RVA = "0x58F73D0", Offset = "0x58F63D0", VA = "0x58F73D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001EA5")]
		[Address(RVA = "0x58F73F0", Offset = "0x58F63F0", VA = "0x58F73F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700036F")]
	public bool WeatherControlled
	{
		[Token(Token = "0x6001EA6")]
		[Address(RVA = "0x58F7410", Offset = "0x58F6410", VA = "0x58F7410")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001EA7")]
		[Address(RVA = "0x58F7420", Offset = "0x58F6420", VA = "0x58F7420")]
		set
		{
		}
	}

	[Token(Token = "0x17000370")]
	public override string ClassName
	{
		[Token(Token = "0x6001EA8")]
		[Address(RVA = "0x58F75A0", Offset = "0x58F65A0", VA = "0x58F75A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000371")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001EA9")]
		[Address(RVA = "0x58F75D0", Offset = "0x58F65D0", VA = "0x58F75D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000372")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001EAA")]
		[Address(RVA = "0x58F75E0", Offset = "0x58F65E0", VA = "0x58F75E0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000373")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001EAB")]
		[Address(RVA = "0x58F75F0", Offset = "0x58F65F0", VA = "0x58F75F0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E8E")]
	[Address(RVA = "0x58F6F10", Offset = "0x58F5F10", VA = "0x58F6F10")]
	public CustomLogicLightBuiltin()
	{
	}

	[Token(Token = "0x6001E8F")]
	[Address(RVA = "0x58F6F20", Offset = "0x58F5F20", VA = "0x58F6F20")]
	public CustomLogicLightBuiltin(CustomLogicMapObjectBuiltin owner, LightType type)
	{
	}
}
