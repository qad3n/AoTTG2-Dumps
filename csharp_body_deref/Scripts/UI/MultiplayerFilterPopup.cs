using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000653")]
internal class MultiplayerFilterPopup : PromptPopup
{
	[Token(Token = "0x17000C32")]
	protected override string Title
	{
		[Token(Token = "0x6003FAF")]
		[Address(RVA = "0x3FF48E0", Offset = "0x3FF48E0", VA = "0x3FF48E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C33")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003FB0")]
		[Address(RVA = "0x3FF4940", Offset = "0x3FF4940", VA = "0x3FF4940", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C34")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003FB1")]
		[Address(RVA = "0x3FF4950", Offset = "0x3FF4950", VA = "0x3FF4950", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C35")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003FB2")]
		[Address(RVA = "0x3FF4960", Offset = "0x3FF4960", VA = "0x3FF4960", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C36")]
	protected override float Width
	{
		[Token(Token = "0x6003FB3")]
		[Address(RVA = "0x3FF4970", Offset = "0x3FF4970", VA = "0x3FF4970", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C37")]
	protected override float Height
	{
		[Token(Token = "0x6003FB4")]
		[Address(RVA = "0x3FF4980", Offset = "0x3FF4980", VA = "0x3FF4980", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C38")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003FB5")]
		[Address(RVA = "0x3FF4990", Offset = "0x3FF4990", VA = "0x3FF4990", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x6003FB6")]
	[Address(RVA = "0x3FF49A0", Offset = "0x3FF49A0", VA = "0x3FF49A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003FB7")]
	[Address(RVA = "0x3FF4CC0", Offset = "0x3FF4CC0", VA = "0x3FF4CC0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003FB8")]
	[Address(RVA = "0x3FF5DC0", Offset = "0x3FF5DC0", VA = "0x3FF5DC0")]
	public MultiplayerFilterPopup()
	{
	}
}
