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

[Token(Token = "0x2000435")]
[CompilerGenerated]
internal class CustomLogicIconBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000436")]
	public new static class Factory
	{
		[Token(Token = "0x6002B09")]
		[Address(RVA = "0x40EA980", Offset = "0x40EA980", VA = "0x40EA980")]
		public static CustomLogicIconBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000437")]
	public new static class Bindings
	{
		[Token(Token = "0x40011A1")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002B0A")]
		[Address(RVA = "0x40EAA10", Offset = "0x40EAA10", VA = "0x40EAA10")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002B0B")]
		[Address(RVA = "0x40EABF0", Offset = "0x40EABF0", VA = "0x40EABF0")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__IconPath()
		{
			return null;
		}

		[Token(Token = "0x6002B0C")]
		[Address(RVA = "0x40EACD0", Offset = "0x40EACD0", VA = "0x40EACD0")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__ScaleMode()
		{
			return null;
		}

		[Token(Token = "0x6002B0D")]
		[Address(RVA = "0x40EADB0", Offset = "0x40EADB0", VA = "0x40EADB0")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetIcon()
		{
			return null;
		}

		[Token(Token = "0x6002B0E")]
		[Address(RVA = "0x40EAF00", Offset = "0x40EAF00", VA = "0x40EAF00")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetTintColor()
		{
			return null;
		}
	}

	[Token(Token = "0x400119F")]
	[FieldOffset(Offset = "0x60")]
	private readonly Image _image;

	[Token(Token = "0x40011A0")]
	[FieldOffset(Offset = "0x68")]
	private string _currentIconPath;

	[Token(Token = "0x170008B5")]
	public string IconPath
	{
		[Token(Token = "0x6002B00")]
		[Address(RVA = "0x40EA760", Offset = "0x40EA760", VA = "0x40EA760")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B01")]
		[Address(RVA = "0x40EA770", Offset = "0x40EA770", VA = "0x40EA770")]
		set
		{
		}
	}

	[Token(Token = "0x170008B6")]
	public int ScaleMode
	{
		[Token(Token = "0x6002B03")]
		[Address(RVA = "0x40EA7C0", Offset = "0x40EA7C0", VA = "0x40EA7C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002B04")]
		[Address(RVA = "0x40EA7E0", Offset = "0x40EA7E0", VA = "0x40EA7E0")]
		set
		{
		}
	}

	[Token(Token = "0x170008B7")]
	public override string ClassName
	{
		[Token(Token = "0x6002B05")]
		[Address(RVA = "0x40EA920", Offset = "0x40EA920", VA = "0x40EA920", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008B8")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x40EA950", Offset = "0x40EA950", VA = "0x40EA950", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008B9")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002B07")]
		[Address(RVA = "0x40EA960", Offset = "0x40EA960", VA = "0x40EA960", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008BA")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002B08")]
		[Address(RVA = "0x40EA970", Offset = "0x40EA970", VA = "0x40EA970", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AFE")]
	[Address(RVA = "0x40EA500", Offset = "0x40EA500", VA = "0x40EA500")]
	public CustomLogicIconBuiltin(Image image)
	{
	}

	[Token(Token = "0x6002AFF")]
	[Address(RVA = "0x40EA550", Offset = "0x40EA550", VA = "0x40EA550")]
	public CustomLogicIconBuiltin SetIcon(string iconPath)
	{
		return null;
	}

	[Token(Token = "0x6002B02")]
	[Address(RVA = "0x40EA780", Offset = "0x40EA780", VA = "0x40EA780")]
	public CustomLogicIconBuiltin SetTintColor(CustomLogicColorBuiltin color)
	{
		return null;
	}
}
