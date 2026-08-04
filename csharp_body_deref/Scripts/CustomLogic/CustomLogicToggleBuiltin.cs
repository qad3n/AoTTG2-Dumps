// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicToggleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicToggleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000451")]
[CompilerGenerated]
internal class CustomLogicToggleBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000452")]
	public new static class Factory
	{
		[Token(Token = "0x6002C15")]
		[Address(RVA = "0x4112660", Offset = "0x4112660", VA = "0x4112660")]
		public static CustomLogicToggleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000453")]
	public new static class Bindings
	{
		[Token(Token = "0x40011CC")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002C16")]
		[Address(RVA = "0x41126F0", Offset = "0x41126F0", VA = "0x41126F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002C17")]
		[Address(RVA = "0x4112920", Offset = "0x4112920", VA = "0x4112920")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6002C18")]
		[Address(RVA = "0x4112A00", Offset = "0x4112A00", VA = "0x4112A00")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x6002C19")]
		[Address(RVA = "0x4112AE0", Offset = "0x4112AE0", VA = "0x4112AE0")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6002C1A")]
		[Address(RVA = "0x4112BC0", Offset = "0x4112BC0", VA = "0x4112BC0")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6002C1B")]
		[Address(RVA = "0x4112D10", Offset = "0x4112D10", VA = "0x4112D10")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40011CA")]
	[FieldOffset(Offset = "0x60")]
	private readonly Toggle _toggle;

	[Token(Token = "0x40011CB")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170008ED")]
	public string Label
	{
		[Token(Token = "0x6002C08")]
		[Address(RVA = "0x4112430", Offset = "0x4112430", VA = "0x4112430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002C09")]
		[Address(RVA = "0x4112470", Offset = "0x4112470", VA = "0x4112470")]
		set
		{
		}
	}

	[Token(Token = "0x170008EE")]
	public string Text
	{
		[Token(Token = "0x6002C0A")]
		[Address(RVA = "0x41124C0", Offset = "0x41124C0", VA = "0x41124C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002C0B")]
		[Address(RVA = "0x41124E0", Offset = "0x41124E0", VA = "0x41124E0")]
		set
		{
		}
	}

	[Token(Token = "0x170008EF")]
	public bool Value
	{
		[Token(Token = "0x6002C0C")]
		[Address(RVA = "0x4112500", Offset = "0x4112500", VA = "0x4112500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002C0D")]
		[Address(RVA = "0x4112530", Offset = "0x4112530", VA = "0x4112530")]
		set
		{
		}
	}

	[Token(Token = "0x170008F0")]
	public override string ClassName
	{
		[Token(Token = "0x6002C10")]
		[Address(RVA = "0x41125B0", Offset = "0x41125B0", VA = "0x41125B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008F1")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002C11")]
		[Address(RVA = "0x41125E0", Offset = "0x41125E0", VA = "0x41125E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008F2")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002C12")]
		[Address(RVA = "0x41125F0", Offset = "0x41125F0", VA = "0x41125F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008F3")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002C13")]
		[Address(RVA = "0x4112600", Offset = "0x4112600", VA = "0x4112600", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002C06")]
	[Address(RVA = "0x41121B0", Offset = "0x41121B0", VA = "0x41121B0")]
	public CustomLogicToggleBuiltin(Toggle toggle)
	{
	}

	[Token(Token = "0x6002C07")]
	[Address(RVA = "0x4112310", Offset = "0x4112310", VA = "0x4112310")]
	private void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6002C0E")]
	[Address(RVA = "0x4112560", Offset = "0x4112560", VA = "0x4112560")]
	public CustomLogicToggleBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6002C0F")]
	[Address(RVA = "0x4112580", Offset = "0x4112580", VA = "0x4112580")]
	public void SetValueWithoutNotify(bool value)
	{
	}
}
