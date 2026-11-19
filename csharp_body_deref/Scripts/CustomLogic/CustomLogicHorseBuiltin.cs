// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHorseBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHorseBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004B5")]
[CompilerGenerated]
internal class CustomLogicHorseBuiltin : CustomLogicCharacterBuiltin
{
	[Token(Token = "0x20004B6")]
	public new static class Factory
	{
		[Token(Token = "0x60021AD")]
		[Address(RVA = "0x59174F0", Offset = "0x59164F0", VA = "0x59174F0")]
		public static CustomLogicHorseBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20004B7")]
	public new static class Bindings
	{
		[Token(Token = "0x40016FD")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60021AE")]
		[Address(RVA = "0x5917580", Offset = "0x5916580", VA = "0x5917580")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60021AF")]
		[Address(RVA = "0x59177B0", Offset = "0x59167B0", VA = "0x59177B0")]
		public static CLPropertyBinding<CustomLogicHorseBuiltin> __CreatePropertyBinding__RunSpeed()
		{
			return null;
		}

		[Token(Token = "0x60021B0")]
		[Address(RVA = "0x5917890", Offset = "0x5916890", VA = "0x5917890")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__Follow()
		{
			return null;
		}

		[Token(Token = "0x60021B1")]
		[Address(RVA = "0x59179D0", Offset = "0x59169D0", VA = "0x59179D0")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__Stay()
		{
			return null;
		}

		[Token(Token = "0x60021B2")]
		[Address(RVA = "0x5917B10", Offset = "0x5916B10", VA = "0x5917B10")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__ComeTo()
		{
			return null;
		}

		[Token(Token = "0x60021B3")]
		[Address(RVA = "0x5917C50", Offset = "0x5916C50", VA = "0x5917C50")]
		public static CLMethodBinding<CustomLogicHorseBuiltin> __CreateMethodBinding__MoveTo()
		{
			return null;
		}
	}

	[Token(Token = "0x40016FC")]
	[FieldOffset(Offset = "0x38")]
	public readonly Horse Horse;

	[Token(Token = "0x170003FD")]
	public float RunSpeed
	{
		[Token(Token = "0x60021A3")]
		[Address(RVA = "0x5917160", Offset = "0x5916160", VA = "0x5917160")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60021A4")]
		[Address(RVA = "0x5917180", Offset = "0x5916180", VA = "0x5917180")]
		set
		{
		}
	}

	[Token(Token = "0x170003FE")]
	public override string ClassName
	{
		[Token(Token = "0x60021A9")]
		[Address(RVA = "0x5917490", Offset = "0x5916490", VA = "0x5917490", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003FF")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60021AA")]
		[Address(RVA = "0x59174C0", Offset = "0x59164C0", VA = "0x59174C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000400")]
	public override bool IsStatic
	{
		[Token(Token = "0x60021AB")]
		[Address(RVA = "0x59174D0", Offset = "0x59164D0", VA = "0x59174D0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000401")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60021AC")]
		[Address(RVA = "0x59174E0", Offset = "0x59164E0", VA = "0x59174E0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60021A2")]
	[Address(RVA = "0x5917130", Offset = "0x5916130", VA = "0x5917130")]
	public CustomLogicHorseBuiltin(Horse horse)
	{
	}

	[Token(Token = "0x60021A5")]
	[Address(RVA = "0x5917230", Offset = "0x5916230", VA = "0x5917230")]
	public void Follow(CustomLogicCharacterBuiltin target, float stopDistance = 5f)
	{
	}

	[Token(Token = "0x60021A6")]
	[Address(RVA = "0x59172D0", Offset = "0x59162D0", VA = "0x59172D0")]
	public void Stay()
	{
	}

	[Token(Token = "0x60021A7")]
	[Address(RVA = "0x5917350", Offset = "0x5916350", VA = "0x5917350")]
	public void ComeTo(CustomLogicCharacterBuiltin target, float arrivalDistance = 5f)
	{
	}

	[Token(Token = "0x60021A8")]
	[Address(RVA = "0x59173F0", Offset = "0x59163F0", VA = "0x59173F0")]
	public new void MoveTo(CustomLogicVector3Builtin position, float range = 5f, bool ignoreEnemies = false)
	{
	}
}
