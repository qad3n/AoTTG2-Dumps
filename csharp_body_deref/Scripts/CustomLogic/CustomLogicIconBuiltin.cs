// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicIconBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicIconBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005EA")]
[CompilerGenerated]
internal class CustomLogicIconBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005EB")]
	public new static class Factory
	{
		[Token(Token = "0x60036FC")]
		[Address(RVA = "0x59FF0E0", Offset = "0x59FE0E0", VA = "0x59FF0E0")]
		public static CustomLogicIconBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005EC")]
	public new static class Bindings
	{
		[Token(Token = "0x400197E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60036FD")]
		[Address(RVA = "0x59FF170", Offset = "0x59FE170", VA = "0x59FF170")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60036FE")]
		[Address(RVA = "0x59FF350", Offset = "0x59FE350", VA = "0x59FF350")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__IconPath()
		{
			return null;
		}

		[Token(Token = "0x60036FF")]
		[Address(RVA = "0x59FF430", Offset = "0x59FE430", VA = "0x59FF430")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__ScaleMode()
		{
			return null;
		}

		[Token(Token = "0x6003700")]
		[Address(RVA = "0x59FF510", Offset = "0x59FE510", VA = "0x59FF510")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetIcon()
		{
			return null;
		}

		[Token(Token = "0x6003701")]
		[Address(RVA = "0x59FF650", Offset = "0x59FE650", VA = "0x59FF650")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetTintColor()
		{
			return null;
		}
	}

	[Token(Token = "0x400197C")]
	[FieldOffset(Offset = "0x60")]
	private readonly Image _image;

	[Token(Token = "0x400197D")]
	[FieldOffset(Offset = "0x68")]
	private string _currentIconPath;

	[Token(Token = "0x170009F1")]
	public string IconPath
	{
		[Token(Token = "0x60036F3")]
		[Address(RVA = "0x59FEEC0", Offset = "0x59FDEC0", VA = "0x59FEEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60036F4")]
		[Address(RVA = "0x59FEED0", Offset = "0x59FDED0", VA = "0x59FEED0")]
		set
		{
		}
	}

	[Token(Token = "0x170009F2")]
	public int ScaleMode
	{
		[Token(Token = "0x60036F6")]
		[Address(RVA = "0x59FEF20", Offset = "0x59FDF20", VA = "0x59FEF20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60036F7")]
		[Address(RVA = "0x59FEF40", Offset = "0x59FDF40", VA = "0x59FEF40")]
		set
		{
		}
	}

	[Token(Token = "0x170009F3")]
	public override string ClassName
	{
		[Token(Token = "0x60036F8")]
		[Address(RVA = "0x59FF080", Offset = "0x59FE080", VA = "0x59FF080", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60036F9")]
		[Address(RVA = "0x59FF0B0", Offset = "0x59FE0B0", VA = "0x59FF0B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009F5")]
	public override bool IsStatic
	{
		[Token(Token = "0x60036FA")]
		[Address(RVA = "0x59FF0C0", Offset = "0x59FE0C0", VA = "0x59FF0C0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009F6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60036FB")]
		[Address(RVA = "0x59FF0D0", Offset = "0x59FE0D0", VA = "0x59FF0D0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60036F1")]
	[Address(RVA = "0x59FEC20", Offset = "0x59FDC20", VA = "0x59FEC20")]
	public CustomLogicIconBuiltin(Image image)
	{
	}

	[Token(Token = "0x60036F2")]
	[Address(RVA = "0x59FEC70", Offset = "0x59FDC70", VA = "0x59FEC70")]
	public CustomLogicIconBuiltin SetIcon(string iconPath)
	{
		return null;
	}

	[Token(Token = "0x60036F5")]
	[Address(RVA = "0x59FEEE0", Offset = "0x59FDEE0", VA = "0x59FEEE0")]
	public CustomLogicIconBuiltin SetTintColor(CustomLogicColorBuiltin color)
	{
		return null;
	}
}
