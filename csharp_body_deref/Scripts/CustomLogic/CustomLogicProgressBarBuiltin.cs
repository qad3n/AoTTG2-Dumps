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

[Token(Token = "0x20005F5")]
[CompilerGenerated]
internal class CustomLogicProgressBarBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005F6")]
	public new static class Factory
	{
		[Token(Token = "0x6003743")]
		[Address(RVA = "0x5A01280", Offset = "0x5A00280", VA = "0x5A01280")]
		public static CustomLogicProgressBarBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005F7")]
	public new static class Bindings
	{
		[Token(Token = "0x400198B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003744")]
		[Address(RVA = "0x5A01310", Offset = "0x5A00310", VA = "0x5A01310")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003745")]
		[Address(RVA = "0x5A01700", Offset = "0x5A00700", VA = "0x5A01700")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Title()
		{
			return null;
		}

		[Token(Token = "0x6003746")]
		[Address(RVA = "0x5A017E0", Offset = "0x5A007E0", VA = "0x5A017E0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6003747")]
		[Address(RVA = "0x5A018C0", Offset = "0x5A008C0", VA = "0x5A018C0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x6003748")]
		[Address(RVA = "0x5A019A0", Offset = "0x5A009A0", VA = "0x5A019A0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x6003749")]
		[Address(RVA = "0x5A01A80", Offset = "0x5A00A80", VA = "0x5A01A80")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x600374A")]
		[Address(RVA = "0x5A01BC0", Offset = "0x5A00BC0", VA = "0x5A01BC0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x600374B")]
		[Address(RVA = "0x5A01D00", Offset = "0x5A00D00", VA = "0x5A01D00")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__GetPercentage()
		{
			return null;
		}

		[Token(Token = "0x600374C")]
		[Address(RVA = "0x5A01E40", Offset = "0x5A00E40", VA = "0x5A01E40")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetPercentage()
		{
			return null;
		}
	}

	[Token(Token = "0x4001989")]
	[FieldOffset(Offset = "0x60")]
	private readonly ProgressBar _progressBar;

	[Token(Token = "0x400198A")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000A02")]
	public string Title
	{
		[Token(Token = "0x6003732")]
		[Address(RVA = "0x5A00F90", Offset = "0x59FFF90", VA = "0x5A00F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003733")]
		[Address(RVA = "0x5A00FB0", Offset = "0x59FFFB0", VA = "0x5A00FB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A03")]
	public float Value
	{
		[Token(Token = "0x6003734")]
		[Address(RVA = "0x5A00FD0", Offset = "0x59FFFD0", VA = "0x5A00FD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6003735")]
		[Address(RVA = "0x5A01000", Offset = "0x5A00000", VA = "0x5A01000")]
		set
		{
		}
	}

	[Token(Token = "0x17000A04")]
	public float LowValue
	{
		[Token(Token = "0x6003736")]
		[Address(RVA = "0x5A01030", Offset = "0x5A00030", VA = "0x5A01030")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6003737")]
		[Address(RVA = "0x5A01050", Offset = "0x5A00050", VA = "0x5A01050")]
		set
		{
		}
	}

	[Token(Token = "0x17000A05")]
	public float HighValue
	{
		[Token(Token = "0x6003738")]
		[Address(RVA = "0x5A01070", Offset = "0x5A00070", VA = "0x5A01070")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6003739")]
		[Address(RVA = "0x5A01090", Offset = "0x5A00090", VA = "0x5A01090")]
		set
		{
		}
	}

	[Token(Token = "0x17000A06")]
	public override string ClassName
	{
		[Token(Token = "0x600373E")]
		[Address(RVA = "0x5A011D0", Offset = "0x5A001D0", VA = "0x5A011D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A07")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600373F")]
		[Address(RVA = "0x5A01200", Offset = "0x5A00200", VA = "0x5A01200", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A08")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003740")]
		[Address(RVA = "0x5A01210", Offset = "0x5A00210", VA = "0x5A01210", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A09")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003741")]
		[Address(RVA = "0x5A01220", Offset = "0x5A00220", VA = "0x5A01220", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003730")]
	[Address(RVA = "0x5A00DC0", Offset = "0x59FFDC0", VA = "0x5A00DC0")]
	public CustomLogicProgressBarBuiltin(ProgressBar progressBar)
	{
	}

	[Token(Token = "0x6003731")]
	[Address(RVA = "0x5A00E70", Offset = "0x59FFE70", VA = "0x5A00E70")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x600373A")]
	[Address(RVA = "0x5A010B0", Offset = "0x5A000B0", VA = "0x5A010B0")]
	public CustomLogicProgressBarBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x600373B")]
	[Address(RVA = "0x5A010D0", Offset = "0x5A000D0", VA = "0x5A010D0")]
	public void SetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x600373C")]
	[Address(RVA = "0x5A010F0", Offset = "0x5A000F0", VA = "0x5A010F0")]
	public float GetPercentage()
	{
		return default(float);
	}

	[Token(Token = "0x600373D")]
	[Address(RVA = "0x5A01160", Offset = "0x5A00160", VA = "0x5A01160")]
	public CustomLogicProgressBarBuiltin SetPercentage(float percentage)
	{
		return null;
	}
}
