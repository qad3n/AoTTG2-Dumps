using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20003FF")]
[CompilerGenerated]
internal class CustomLogicScrollViewBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000400")]
	public new static class Factory
	{
		[Token(Token = "0x6002975")]
		[Address(RVA = "0x3DE3A20", Offset = "0x3DE3A20", VA = "0x3DE3A20")]
		public static CustomLogicScrollViewBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000401")]
	public new static class Bindings
	{
		[Token(Token = "0x40010AB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002976")]
		[Address(RVA = "0x3DE3AB0", Offset = "0x3DE3AB0", VA = "0x3DE3AB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002977")]
		[Address(RVA = "0x3DE3F70", Offset = "0x3DE3F70", VA = "0x3DE3F70")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__ScrollOffset()
		{
			return null;
		}

		[Token(Token = "0x6002978")]
		[Address(RVA = "0x3DE4050", Offset = "0x3DE4050", VA = "0x3DE4050")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__ScrollDecelerationRate()
		{
			return null;
		}

		[Token(Token = "0x6002979")]
		[Address(RVA = "0x3DE4130", Offset = "0x3DE4130", VA = "0x3DE4130")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__MouseWheelScrollSize()
		{
			return null;
		}

		[Token(Token = "0x600297A")]
		[Address(RVA = "0x3DE4210", Offset = "0x3DE4210", VA = "0x3DE4210")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__HorizontalScrollEnabled()
		{
			return null;
		}

		[Token(Token = "0x600297B")]
		[Address(RVA = "0x3DE42F0", Offset = "0x3DE42F0", VA = "0x3DE42F0")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__VerticalScrollEnabled()
		{
			return null;
		}

		[Token(Token = "0x600297C")]
		[Address(RVA = "0x3DE43D0", Offset = "0x3DE43D0", VA = "0x3DE43D0")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__Elasticity()
		{
			return null;
		}

		[Token(Token = "0x600297D")]
		[Address(RVA = "0x3DE4520", Offset = "0x3DE4520", VA = "0x3DE4520")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__SetScrollDecelerationRate()
		{
			return null;
		}

		[Token(Token = "0x600297E")]
		[Address(RVA = "0x3DE4670", Offset = "0x3DE4670", VA = "0x3DE4670")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__SetScrollOffset()
		{
			return null;
		}

		[Token(Token = "0x600297F")]
		[Address(RVA = "0x3DE47C0", Offset = "0x3DE47C0", VA = "0x3DE47C0")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__ScrollToTop()
		{
			return null;
		}

		[Token(Token = "0x6002980")]
		[Address(RVA = "0x3DE4910", Offset = "0x3DE4910", VA = "0x3DE4910")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__ScrollToBottom()
		{
			return null;
		}
	}

	[Token(Token = "0x40010AA")]
	[FieldOffset(Offset = "0x60")]
	private readonly ScrollView _scrollView;

	[Token(Token = "0x17000864")]
	public CustomLogicVector2Builtin ScrollOffset
	{
		[Token(Token = "0x6002962")]
		[Address(RVA = "0x3DE3530", Offset = "0x3DE3530", VA = "0x3DE3530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002963")]
		[Address(RVA = "0x3DE35A0", Offset = "0x3DE35A0", VA = "0x3DE35A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000865")]
	public float ScrollDecelerationRate
	{
		[Token(Token = "0x6002964")]
		[Address(RVA = "0x3DE35D0", Offset = "0x3DE35D0", VA = "0x3DE35D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002965")]
		[Address(RVA = "0x3DE35F0", Offset = "0x3DE35F0", VA = "0x3DE35F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000866")]
	public float MouseWheelScrollSize
	{
		[Token(Token = "0x6002966")]
		[Address(RVA = "0x3DE3610", Offset = "0x3DE3610", VA = "0x3DE3610")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002967")]
		[Address(RVA = "0x3DE3630", Offset = "0x3DE3630", VA = "0x3DE3630")]
		set
		{
		}
	}

	[Token(Token = "0x17000867")]
	public bool HorizontalScrollEnabled
	{
		[Token(Token = "0x6002968")]
		[Address(RVA = "0x3DE3650", Offset = "0x3DE3650", VA = "0x3DE3650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002969")]
		[Address(RVA = "0x3DE3670", Offset = "0x3DE3670", VA = "0x3DE3670")]
		set
		{
		}
	}

	[Token(Token = "0x17000868")]
	public bool VerticalScrollEnabled
	{
		[Token(Token = "0x600296A")]
		[Address(RVA = "0x3DE3700", Offset = "0x3DE3700", VA = "0x3DE3700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600296B")]
		[Address(RVA = "0x3DE3720", Offset = "0x3DE3720", VA = "0x3DE3720")]
		set
		{
		}
	}

	[Token(Token = "0x17000869")]
	public override string ClassName
	{
		[Token(Token = "0x6002971")]
		[Address(RVA = "0x3DE39C0", Offset = "0x3DE39C0", VA = "0x3DE39C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700086A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002972")]
		[Address(RVA = "0x3DE39F0", Offset = "0x3DE39F0", VA = "0x3DE39F0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700086B")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002973")]
		[Address(RVA = "0x3DE3A00", Offset = "0x3DE3A00", VA = "0x3DE3A00", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700086C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002974")]
		[Address(RVA = "0x3DE3A10", Offset = "0x3DE3A10", VA = "0x3DE3A10", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002961")]
	[Address(RVA = "0x3DE3500", Offset = "0x3DE3500", VA = "0x3DE3500")]
	public CustomLogicScrollViewBuiltin(ScrollView scrollView)
	{
	}

	[Token(Token = "0x600296C")]
	[Address(RVA = "0x3DE37B0", Offset = "0x3DE37B0", VA = "0x3DE37B0")]
	public CustomLogicScrollViewBuiltin Elasticity(int value)
	{
		return null;
	}

	[Token(Token = "0x600296D")]
	[Address(RVA = "0x3DE38F0", Offset = "0x3DE38F0", VA = "0x3DE38F0")]
	public CustomLogicScrollViewBuiltin SetScrollDecelerationRate(float rate)
	{
		return null;
	}

	[Token(Token = "0x600296E")]
	[Address(RVA = "0x3DE3930", Offset = "0x3DE3930", VA = "0x3DE3930")]
	public CustomLogicScrollViewBuiltin SetScrollOffset(CustomLogicVector2Builtin offset)
	{
		return null;
	}

	[Token(Token = "0x600296F")]
	[Address(RVA = "0x3DE3960", Offset = "0x3DE3960", VA = "0x3DE3960")]
	public void ScrollToTop()
	{
	}

	[Token(Token = "0x6002970")]
	[Address(RVA = "0x3DE3990", Offset = "0x3DE3990", VA = "0x3DE3990")]
	public void ScrollToBottom()
	{
	}
}
