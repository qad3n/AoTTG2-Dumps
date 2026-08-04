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

[Token(Token = "0x2000440")]
[CompilerGenerated]
internal class CustomLogicProgressBarBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000441")]
	public new static class Factory
	{
		[Token(Token = "0x6002B50")]
		[Address(RVA = "0x40ECB20", Offset = "0x40ECB20", VA = "0x40ECB20")]
		public static CustomLogicProgressBarBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000442")]
	public new static class Bindings
	{
		[Token(Token = "0x40011AE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002B51")]
		[Address(RVA = "0x40ECBB0", Offset = "0x40ECBB0", VA = "0x40ECBB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002B52")]
		[Address(RVA = "0x40ECFA0", Offset = "0x40ECFA0", VA = "0x40ECFA0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Title()
		{
			return null;
		}

		[Token(Token = "0x6002B53")]
		[Address(RVA = "0x40ED080", Offset = "0x40ED080", VA = "0x40ED080")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6002B54")]
		[Address(RVA = "0x40ED160", Offset = "0x40ED160", VA = "0x40ED160")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x6002B55")]
		[Address(RVA = "0x40ED240", Offset = "0x40ED240", VA = "0x40ED240")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x6002B56")]
		[Address(RVA = "0x40ED320", Offset = "0x40ED320", VA = "0x40ED320")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6002B57")]
		[Address(RVA = "0x40ED470", Offset = "0x40ED470", VA = "0x40ED470")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x6002B58")]
		[Address(RVA = "0x40ED5C0", Offset = "0x40ED5C0", VA = "0x40ED5C0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__GetPercentage()
		{
			return null;
		}

		[Token(Token = "0x6002B59")]
		[Address(RVA = "0x40ED710", Offset = "0x40ED710", VA = "0x40ED710")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetPercentage()
		{
			return null;
		}
	}

	[Token(Token = "0x40011AC")]
	[FieldOffset(Offset = "0x60")]
	private readonly ProgressBar _progressBar;

	[Token(Token = "0x40011AD")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170008C6")]
	public string Title
	{
		[Token(Token = "0x6002B3F")]
		[Address(RVA = "0x40EC830", Offset = "0x40EC830", VA = "0x40EC830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B40")]
		[Address(RVA = "0x40EC850", Offset = "0x40EC850", VA = "0x40EC850")]
		set
		{
		}
	}

	[Token(Token = "0x170008C7")]
	public float Value
	{
		[Token(Token = "0x6002B41")]
		[Address(RVA = "0x40EC870", Offset = "0x40EC870", VA = "0x40EC870")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002B42")]
		[Address(RVA = "0x40EC8A0", Offset = "0x40EC8A0", VA = "0x40EC8A0")]
		set
		{
		}
	}

	[Token(Token = "0x170008C8")]
	public float LowValue
	{
		[Token(Token = "0x6002B43")]
		[Address(RVA = "0x40EC8D0", Offset = "0x40EC8D0", VA = "0x40EC8D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002B44")]
		[Address(RVA = "0x40EC8F0", Offset = "0x40EC8F0", VA = "0x40EC8F0")]
		set
		{
		}
	}

	[Token(Token = "0x170008C9")]
	public float HighValue
	{
		[Token(Token = "0x6002B45")]
		[Address(RVA = "0x40EC910", Offset = "0x40EC910", VA = "0x40EC910")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002B46")]
		[Address(RVA = "0x40EC930", Offset = "0x40EC930", VA = "0x40EC930")]
		set
		{
		}
	}

	[Token(Token = "0x170008CA")]
	public override string ClassName
	{
		[Token(Token = "0x6002B4B")]
		[Address(RVA = "0x40ECA70", Offset = "0x40ECA70", VA = "0x40ECA70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008CB")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002B4C")]
		[Address(RVA = "0x40ECAA0", Offset = "0x40ECAA0", VA = "0x40ECAA0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008CC")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002B4D")]
		[Address(RVA = "0x40ECAB0", Offset = "0x40ECAB0", VA = "0x40ECAB0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008CD")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002B4E")]
		[Address(RVA = "0x40ECAC0", Offset = "0x40ECAC0", VA = "0x40ECAC0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002B3D")]
	[Address(RVA = "0x40EC660", Offset = "0x40EC660", VA = "0x40EC660")]
	public CustomLogicProgressBarBuiltin(ProgressBar progressBar)
	{
	}

	[Token(Token = "0x6002B3E")]
	[Address(RVA = "0x40EC710", Offset = "0x40EC710", VA = "0x40EC710")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6002B47")]
	[Address(RVA = "0x40EC950", Offset = "0x40EC950", VA = "0x40EC950")]
	public CustomLogicProgressBarBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6002B48")]
	[Address(RVA = "0x40EC970", Offset = "0x40EC970", VA = "0x40EC970")]
	public void SetValueWithoutNotify(float value)
	{
	}

	[Token(Token = "0x6002B49")]
	[Address(RVA = "0x40EC990", Offset = "0x40EC990", VA = "0x40EC990")]
	public float GetPercentage()
	{
		return default(float);
	}

	[Token(Token = "0x6002B4A")]
	[Address(RVA = "0x40ECA00", Offset = "0x40ECA00", VA = "0x40ECA00")]
	public CustomLogicProgressBarBuiltin SetPercentage(float percentage)
	{
		return null;
	}
}
