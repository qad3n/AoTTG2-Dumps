using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20003FB")]
[CompilerGenerated]
internal class CustomLogicProgressBarBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20003FC")]
	public new static class Factory
	{
		[Token(Token = "0x6002948")]
		[Address(RVA = "0x3DE1FB0", Offset = "0x3DE1FB0", VA = "0x3DE1FB0")]
		public static CustomLogicProgressBarBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003FD")]
	public new static class Bindings
	{
		[Token(Token = "0x40010A4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002949")]
		[Address(RVA = "0x3DE2040", Offset = "0x3DE2040", VA = "0x3DE2040")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600294A")]
		[Address(RVA = "0x3DE2430", Offset = "0x3DE2430", VA = "0x3DE2430")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Title()
		{
			return null;
		}

		[Token(Token = "0x600294B")]
		[Address(RVA = "0x3DE2510", Offset = "0x3DE2510", VA = "0x3DE2510")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x600294C")]
		[Address(RVA = "0x3DE25F0", Offset = "0x3DE25F0", VA = "0x3DE25F0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x600294D")]
		[Address(RVA = "0x3DE26D0", Offset = "0x3DE26D0", VA = "0x3DE26D0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x600294E")]
		[Address(RVA = "0x3DE27B0", Offset = "0x3DE27B0", VA = "0x3DE27B0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x600294F")]
		[Address(RVA = "0x3DE2900", Offset = "0x3DE2900", VA = "0x3DE2900")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x6002950")]
		[Address(RVA = "0x3DE2A50", Offset = "0x3DE2A50", VA = "0x3DE2A50")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__GetPercentage()
		{
			return null;
		}

		[Token(Token = "0x6002951")]
		[Address(RVA = "0x3DE2BA0", Offset = "0x3DE2BA0", VA = "0x3DE2BA0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetPercentage()
		{
			return null;
		}
	}

	[Token(Token = "0x40010A2")]
	[FieldOffset(Offset = "0x60")]
	private readonly ProgressBar _progressBar;

	[Token(Token = "0x40010A3")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x1700085C")]
	public string Title
	{
		[Token(Token = "0x6002937")]
		[Address(RVA = "0x3DE1CC0", Offset = "0x3DE1CC0", VA = "0x3DE1CC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002938")]
		[Address(RVA = "0x3DE1CE0", Offset = "0x3DE1CE0", VA = "0x3DE1CE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700085D")]
	public float Value
	{
		[Token(Token = "0x6002939")]
		[Address(RVA = "0x3DE1D00", Offset = "0x3DE1D00", VA = "0x3DE1D00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600293A")]
		[Address(RVA = "0x3DE1D30", Offset = "0x3DE1D30", VA = "0x3DE1D30")]
		set
		{
		}
	}

	[Token(Token = "0x1700085E")]
	public float LowValue
	{
		[Token(Token = "0x600293B")]
		[Address(RVA = "0x3DE1D60", Offset = "0x3DE1D60", VA = "0x3DE1D60")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600293C")]
		[Address(RVA = "0x3DE1D80", Offset = "0x3DE1D80", VA = "0x3DE1D80")]
		set
		{
		}
	}

	[Token(Token = "0x1700085F")]
	public float HighValue
	{
		[Token(Token = "0x600293D")]
		[Address(RVA = "0x3DE1DA0", Offset = "0x3DE1DA0", VA = "0x3DE1DA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600293E")]
		[Address(RVA = "0x3DE1DC0", Offset = "0x3DE1DC0", VA = "0x3DE1DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000860")]
	public override string ClassName
	{
		[Token(Token = "0x6002943")]
		[Address(RVA = "0x3DE1F00", Offset = "0x3DE1F00", VA = "0x3DE1F00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000861")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002944")]
		[Address(RVA = "0x3DE1F30", Offset = "0x3DE1F30", VA = "0x3DE1F30", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000862")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002945")]
		[Address(RVA = "0x3DE1F40", Offset = "0x3DE1F40", VA = "0x3DE1F40", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000863")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002946")]
		[Address(RVA = "0x3DE1F50", Offset = "0x3DE1F50", VA = "0x3DE1F50", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002935")]
	[Address(RVA = "0x3DE1AF0", Offset = "0x3DE1AF0", VA = "0x3DE1AF0")]
	public CustomLogicProgressBarBuiltin(ProgressBar progressBar)
	{
	}

	[Token(Token = "0x6002936")]
	[Address(RVA = "0x3DE1BA0", Offset = "0x3DE1BA0", VA = "0x3DE1BA0")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x600293F")]
	[Address(RVA = "0x3DE1DE0", Offset = "0x3DE1DE0", VA = "0x3DE1DE0")]
	public CustomLogicProgressBarBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6002940")]
	[Address(RVA = "0x3DE1E00", Offset = "0x3DE1E00", VA = "0x3DE1E00")]
	public void SetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x6002941")]
	[Address(RVA = "0x3DE1E20", Offset = "0x3DE1E20", VA = "0x3DE1E20")]
	public float GetPercentage()
	{
		return default(float);
	}

	[Token(Token = "0x6002942")]
	[Address(RVA = "0x3DE1E90", Offset = "0x3DE1E90", VA = "0x3DE1E90")]
	public CustomLogicProgressBarBuiltin SetPercentage(float percentage)
	{
		return null;
	}
}
