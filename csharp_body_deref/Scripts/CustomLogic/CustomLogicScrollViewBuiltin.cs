// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicScrollViewBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x200059A")]
[CompilerGenerated]
internal class CustomLogicScrollViewBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200059B")]
	public new static class Factory
	{
		[Token(Token = "0x60034E4")]
		[Address(RVA = "0x2074C50", Offset = "0x2073250", VA = "0x182074C50")]
		public static CustomLogicScrollViewBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200059C")]
	public new static class Bindings
	{
		[Token(Token = "0x40017F2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60034E5")]
		[Address(RVA = "0x2053460", Offset = "0x2051A60", VA = "0x182053460")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60034E6")]
		[Address(RVA = "0x20632C0", Offset = "0x20618C0", VA = "0x1820632C0")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__ScrollOffset()
		{
			return null;
		}

		[Token(Token = "0x60034E7")]
		[Address(RVA = "0x20631D0", Offset = "0x20617D0", VA = "0x1820631D0")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__ScrollDecelerationRate()
		{
			return null;
		}

		[Token(Token = "0x60034E8")]
		[Address(RVA = "0x2062E10", Offset = "0x2061410", VA = "0x182062E10")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__MouseWheelScrollSize()
		{
			return null;
		}

		[Token(Token = "0x60034E9")]
		[Address(RVA = "0x2062230", Offset = "0x2060830", VA = "0x182062230")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__HorizontalScrollEnabled()
		{
			return null;
		}

		[Token(Token = "0x60034EA")]
		[Address(RVA = "0x2064030", Offset = "0x2062630", VA = "0x182064030")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__VerticalScrollEnabled()
		{
			return null;
		}

		[Token(Token = "0x60034EB")]
		[Address(RVA = "0x2059420", Offset = "0x2057A20", VA = "0x182059420")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__Elasticity()
		{
			return null;
		}

		[Token(Token = "0x60034EC")]
		[Address(RVA = "0x205EC60", Offset = "0x205D260", VA = "0x18205EC60")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__SetScrollDecelerationRate()
		{
			return null;
		}

		[Token(Token = "0x60034ED")]
		[Address(RVA = "0x205ED80", Offset = "0x205D380", VA = "0x18205ED80")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__SetScrollOffset()
		{
			return null;
		}

		[Token(Token = "0x60034EE")]
		[Address(RVA = "0x205D410", Offset = "0x205BA10", VA = "0x18205D410")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__ScrollToTop()
		{
			return null;
		}

		[Token(Token = "0x60034EF")]
		[Address(RVA = "0x205D2F0", Offset = "0x205B8F0", VA = "0x18205D2F0")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__ScrollToBottom()
		{
			return null;
		}
	}

	[Token(Token = "0x40017F1")]
	[FieldOffset(Offset = "0x60")]
	private readonly ScrollView _scrollView;

	[Token(Token = "0x170009C2")]
	public CustomLogicVector2Builtin ScrollOffset
	{
		[Token(Token = "0x60034D1")]
		[Address(RVA = "0x2068290", Offset = "0x2066890", VA = "0x182068290")]
		get
		{
			return null;
		}
		[Token(Token = "0x60034D2")]
		[Address(RVA = "0x2068450", Offset = "0x2066A50", VA = "0x182068450")]
		set
		{
		}
	}

	[Token(Token = "0x170009C3")]
	public float ScrollDecelerationRate
	{
		[Token(Token = "0x60034D3")]
		[Address(RVA = "0x2068270", Offset = "0x2066870", VA = "0x182068270")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60034D4")]
		[Address(RVA = "0x2068430", Offset = "0x2066A30", VA = "0x182068430")]
		set
		{
		}
	}

	[Token(Token = "0x170009C4")]
	public float MouseWheelScrollSize
	{
		[Token(Token = "0x60034D5")]
		[Address(RVA = "0x2068250", Offset = "0x2066850", VA = "0x182068250")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60034D6")]
		[Address(RVA = "0x2068410", Offset = "0x2066A10", VA = "0x182068410")]
		set
		{
		}
	}

	[Token(Token = "0x170009C5")]
	public bool HorizontalScrollEnabled
	{
		[Token(Token = "0x60034D7")]
		[Address(RVA = "0x2068210", Offset = "0x2066810", VA = "0x182068210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60034D8")]
		[Address(RVA = "0x2068350", Offset = "0x2066950", VA = "0x182068350")]
		set
		{
		}
	}

	[Token(Token = "0x170009C6")]
	public bool VerticalScrollEnabled
	{
		[Token(Token = "0x60034D9")]
		[Address(RVA = "0x2068310", Offset = "0x2066910", VA = "0x182068310")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60034DA")]
		[Address(RVA = "0x2068490", Offset = "0x2066A90", VA = "0x182068490")]
		set
		{
		}
	}

	[Token(Token = "0x170009C7")]
	public override string ClassName
	{
		[Token(Token = "0x60034E0")]
		[Address(RVA = "0x20681E0", Offset = "0x20667E0", VA = "0x1820681E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009C8")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60034E1")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009C9")]
	public override bool IsStatic
	{
		[Token(Token = "0x60034E2")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CA")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60034E3")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60034D0")]
	[Address(RVA = "0x2067970", Offset = "0x2065F70", VA = "0x182067970")]
	public CustomLogicScrollViewBuiltin(ScrollView scrollView)
	{
	}

	[Token(Token = "0x60034DB")]
	[Address(RVA = "0x2067F90", Offset = "0x2066590", VA = "0x182067F90")]
	public CustomLogicScrollViewBuiltin Elasticity(int value)
	{
		return null;
	}

	[Token(Token = "0x60034DC")]
	[Address(RVA = "0x2068150", Offset = "0x2066750", VA = "0x182068150")]
	public CustomLogicScrollViewBuiltin SetScrollDecelerationRate(float rate)
	{
		return null;
	}

	[Token(Token = "0x60034DD")]
	[Address(RVA = "0x20681A0", Offset = "0x20667A0", VA = "0x1820681A0")]
	public CustomLogicScrollViewBuiltin SetScrollOffset(CustomLogicVector2Builtin offset)
	{
		return null;
	}

	[Token(Token = "0x60034DE")]
	[Address(RVA = "0x2068100", Offset = "0x2066700", VA = "0x182068100")]
	public void ScrollToTop()
	{
	}

	[Token(Token = "0x60034DF")]
	[Address(RVA = "0x20680C0", Offset = "0x20666C0", VA = "0x1820680C0")]
	public void ScrollToBottom()
	{
	}
}
