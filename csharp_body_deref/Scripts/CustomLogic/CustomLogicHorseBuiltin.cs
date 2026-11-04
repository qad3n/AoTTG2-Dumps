// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHorseBuiltin
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHorseBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000456")]
[CompilerGenerated]
internal class CustomLogicHorseBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x2000457")]
	public new static class Factory
	{
		[Token(Token = "0x6001F36")]
		[Address(RVA = "0x1F56CA0", Offset = "0x1F552A0", VA = "0x181F56CA0")]
		public static CustomLogicHorseBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000458")]
	public new static class Bindings
	{
		[Token(Token = "0x400155D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F37")]
		[Address(RVA = "0x1F319A0", Offset = "0x1F2FFA0", VA = "0x181F319A0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6001F38")]
		[Address(RVA = "0x1F4B3A0", Offset = "0x1F499A0", VA = "0x181F4B3A0")]
		public static CLPropertyBinding<CustomLogicHorseBuiltin> __CreatePropertyBinding__RunSpeed()
		{
			return null;
		}

		[Token(Token = "0x6001F39")]
		[Address(RVA = "0x1F417E0", Offset = "0x1F3FDE0", VA = "0x181F417E0")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__Follow()
		{
			return null;
		}

		[Token(Token = "0x6001F3A")]
		[Address(RVA = "0x1F45740", Offset = "0x1F43D40", VA = "0x181F45740")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__Stay()
		{
			return null;
		}

		[Token(Token = "0x6001F3B")]
		[Address(RVA = "0x1F40FC0", Offset = "0x1F3F5C0", VA = "0x181F40FC0")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__ComeTo()
		{
			return null;
		}

		[Token(Token = "0x6001F3C")]
		[Address(RVA = "0x1F435D0", Offset = "0x1F41BD0", VA = "0x181F435D0")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__MoveTo()
		{
			return null;
		}
	}

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0x38")]
	public readonly Horse Horse;

	[Token(Token = "0x170003BC")]
	public float RunSpeed
	{
		[Token(Token = "0x6001F2C")]
		[Address(RVA = "0x1F51480", Offset = "0x1F4FA80", VA = "0x181F51480")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001F2D")]
		[Address(RVA = "0x1F514A0", Offset = "0x1F4FAA0", VA = "0x181F514A0")]
		set
		{
		}
	}

	[Token(Token = "0x170003BD")]
	public override string ClassName
	{
		[Token(Token = "0x6001F32")]
		[Address(RVA = "0x1F51450", Offset = "0x1F4FA50", VA = "0x181F51450", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F33")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BF")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F34")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F35")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001F2B")]
	[Address(RVA = "0x1F51410", Offset = "0x1F4FA10", VA = "0x181F51410")]
	public CustomLogicHorseBuiltin(Horse horse)
	{
	}

	[Token(Token = "0x6001F2E")]
	[Address(RVA = "0x1F51240", Offset = "0x1F4F840", VA = "0x181F51240")]
	public void Follow(CustomLogicCharacterBuiltin target, float stopDistance = 5f)
	{
	}

	[Token(Token = "0x6001F2F")]
	[Address(RVA = "0x1F51390", Offset = "0x1F4F990", VA = "0x181F51390")]
	public void Stay()
	{
	}

	[Token(Token = "0x6001F30")]
	[Address(RVA = "0x1F511A0", Offset = "0x1F4F7A0", VA = "0x181F511A0")]
	public void ComeTo(CustomLogicCharacterBuiltin target, float arrivalDistance = 5f)
	{
	}

	[Token(Token = "0x6001F31")]
	[Address(RVA = "0x1F512E0", Offset = "0x1F4F8E0", VA = "0x181F512E0")]
	public new void MoveTo(CustomLogicVector3Builtin position, float range = 5f, bool ignoreEnemies = false)
	{
	}
}
