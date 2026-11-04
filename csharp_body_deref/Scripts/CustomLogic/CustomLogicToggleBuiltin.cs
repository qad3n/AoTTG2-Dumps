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

[Token(Token = "0x20005A7")]
[CompilerGenerated]
internal class CustomLogicToggleBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005A8")]
	public new static class Factory
	{
		[Token(Token = "0x600357C")]
		[Address(RVA = "0x2074620", Offset = "0x2072C20", VA = "0x182074620")]
		public static CustomLogicToggleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005A9")]
	public new static class Bindings
	{
		[Token(Token = "0x4001809")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600357D")]
		[Address(RVA = "0x2048F10", Offset = "0x2047510", VA = "0x182048F10")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600357E")]
		[Address(RVA = "0x2062A50", Offset = "0x2061050", VA = "0x182062A50")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x600357F")]
		[Address(RVA = "0x2063680", Offset = "0x2061C80", VA = "0x182063680")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x6003580")]
		[Address(RVA = "0x2063C70", Offset = "0x2062270", VA = "0x182063C70")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6003581")]
		[Address(RVA = "0x205B880", Offset = "0x2059E80", VA = "0x18205B880")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6003582")]
		[Address(RVA = "0x205F450", Offset = "0x205DA50", VA = "0x18205F450")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x4001807")]
	[FieldOffset(Offset = "0x60")]
	private readonly Toggle _toggle;

	[Token(Token = "0x4001808")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170009E1")]
	public string Label
	{
		[Token(Token = "0x600356F")]
		[Address(RVA = "0x206A380", Offset = "0x2068980", VA = "0x18206A380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003570")]
		[Address(RVA = "0x206A3F0", Offset = "0x20689F0", VA = "0x18206A3F0")]
		set
		{
		}
	}

	[Token(Token = "0x170009E2")]
	public string Text
	{
		[Token(Token = "0x6003571")]
		[Address(RVA = "0x206A3D0", Offset = "0x20689D0", VA = "0x18206A3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003572")]
		[Address(RVA = "0x206A450", Offset = "0x2068A50", VA = "0x18206A450")]
		set
		{
		}
	}

	[Token(Token = "0x170009E3")]
	public bool Value
	{
		[Token(Token = "0x6003573")]
		[Address(RVA = "0x2066F00", Offset = "0x2065500", VA = "0x182066F00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003574")]
		[Address(RVA = "0x20671C0", Offset = "0x20657C0", VA = "0x1820671C0")]
		set
		{
		}
	}

	[Token(Token = "0x170009E4")]
	public override string ClassName
	{
		[Token(Token = "0x6003577")]
		[Address(RVA = "0x206A350", Offset = "0x2068950", VA = "0x18206A350", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009E5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003578")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009E6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003579")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009E7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600357A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600356D")]
	[Address(RVA = "0x206A2A0", Offset = "0x20688A0", VA = "0x18206A2A0")]
	public CustomLogicToggleBuiltin(Toggle toggle)
	{
	}

	[Token(Token = "0x600356E")]
	[Address(RVA = "0x206A010", Offset = "0x2068610", VA = "0x18206A010")]
	private void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6003575")]
	[Address(RVA = "0x55DEB0", Offset = "0x55C4B0", VA = "0x18055DEB0")]
	public CustomLogicToggleBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6003576")]
	[Address(RVA = "0x2066A20", Offset = "0x2065020", VA = "0x182066A20")]
	public void SetValueWithoutNotify(bool value)
	{
	}
}
