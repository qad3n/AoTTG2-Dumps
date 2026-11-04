// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicProgressBarBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000596")]
[CompilerGenerated]
internal class CustomLogicProgressBarBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000597")]
	public new static class Factory
	{
		[Token(Token = "0x60034B7")]
		[Address(RVA = "0x2074580", Offset = "0x2072B80", VA = "0x182074580")]
		public static CustomLogicProgressBarBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000598")]
	public new static class Bindings
	{
		[Token(Token = "0x40017EB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60034B8")]
		[Address(RVA = "0x2052190", Offset = "0x2050790", VA = "0x182052190")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60034B9")]
		[Address(RVA = "0x20639F0", Offset = "0x2061FF0", VA = "0x1820639F0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Title()
		{
			return null;
		}

		[Token(Token = "0x60034BA")]
		[Address(RVA = "0x2063F40", Offset = "0x2062540", VA = "0x182063F40")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x60034BB")]
		[Address(RVA = "0x2062D20", Offset = "0x2061320", VA = "0x182062D20")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x60034BC")]
		[Address(RVA = "0x2062050", Offset = "0x2060650", VA = "0x182062050")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x60034BD")]
		[Address(RVA = "0x205B9A0", Offset = "0x2059FA0", VA = "0x18205B9A0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x60034BE")]
		[Address(RVA = "0x205F0F0", Offset = "0x205D6F0", VA = "0x18205F0F0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x60034BF")]
		[Address(RVA = "0x2059D80", Offset = "0x2058380", VA = "0x182059D80")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__GetPercentage()
		{
			return null;
		}

		[Token(Token = "0x60034C0")]
		[Address(RVA = "0x205E8F0", Offset = "0x205CEF0", VA = "0x18205E8F0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetPercentage()
		{
			return null;
		}
	}

	[Token(Token = "0x40017E9")]
	[FieldOffset(Offset = "0x60")]
	private readonly ProgressBar _progressBar;

	[Token(Token = "0x40017EA")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170009BA")]
	public string Title
	{
		[Token(Token = "0x60034A6")]
		[Address(RVA = "0x2067EB0", Offset = "0x20664B0", VA = "0x182067EB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60034A7")]
		[Address(RVA = "0x2067F40", Offset = "0x2066540", VA = "0x182067F40")]
		set
		{
		}
	}

	[Token(Token = "0x170009BB")]
	public float Value
	{
		[Token(Token = "0x60034A8")]
		[Address(RVA = "0x2067ED0", Offset = "0x20664D0", VA = "0x182067ED0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60034A9")]
		[Address(RVA = "0x2067F60", Offset = "0x2066560", VA = "0x182067F60")]
		set
		{
		}
	}

	[Token(Token = "0x170009BC")]
	public float LowValue
	{
		[Token(Token = "0x60034AA")]
		[Address(RVA = "0x2067E90", Offset = "0x2066490", VA = "0x182067E90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60034AB")]
		[Address(RVA = "0x2067F20", Offset = "0x2066520", VA = "0x182067F20")]
		set
		{
		}
	}

	[Token(Token = "0x170009BD")]
	public float HighValue
	{
		[Token(Token = "0x60034AC")]
		[Address(RVA = "0x2067E70", Offset = "0x2066470", VA = "0x182067E70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60034AD")]
		[Address(RVA = "0x2067F00", Offset = "0x2066500", VA = "0x182067F00")]
		set
		{
		}
	}

	[Token(Token = "0x170009BE")]
	public override string ClassName
	{
		[Token(Token = "0x60034B2")]
		[Address(RVA = "0x2067E40", Offset = "0x2066440", VA = "0x182067E40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009BF")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60034B3")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009C0")]
	public override bool IsStatic
	{
		[Token(Token = "0x60034B4")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009C1")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60034B5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60034A4")]
	[Address(RVA = "0x2067D90", Offset = "0x2066390", VA = "0x182067D90")]
	public CustomLogicProgressBarBuiltin(ProgressBar progressBar)
	{
	}

	[Token(Token = "0x60034A5")]
	[Address(RVA = "0x2067A60", Offset = "0x2066060", VA = "0x182067A60")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x60034AE")]
	[Address(RVA = "0x55DEB0", Offset = "0x55C4B0", VA = "0x18055DEB0")]
	public CustomLogicProgressBarBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x60034AF")]
	[Address(RVA = "0x2067C10", Offset = "0x2066210", VA = "0x182067C10")]
	public void SetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x60034B0")]
	[Address(RVA = "0x20679E0", Offset = "0x2065FE0", VA = "0x1820679E0")]
	public float GetPercentage()
	{
		return default(float);
	}

	[Token(Token = "0x60034B1")]
	[Address(RVA = "0x2067B90", Offset = "0x2066190", VA = "0x182067B90")]
	public CustomLogicProgressBarBuiltin SetPercentage(float percentage)
	{
		return null;
	}
}
