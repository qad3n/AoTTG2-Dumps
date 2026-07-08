using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20003F0")]
[CompilerGenerated]
internal class CustomLogicIconBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20003F1")]
	public new static class Factory
	{
		[Token(Token = "0x6002901")]
		[Address(RVA = "0x3DDFE10", Offset = "0x3DDFE10", VA = "0x3DDFE10")]
		public static CustomLogicIconBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003F2")]
	public new static class Bindings
	{
		[Token(Token = "0x4001097")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002902")]
		[Address(RVA = "0x3DDFEA0", Offset = "0x3DDFEA0", VA = "0x3DDFEA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002903")]
		[Address(RVA = "0x3DE0080", Offset = "0x3DE0080", VA = "0x3DE0080")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__IconPath()
		{
			return null;
		}

		[Token(Token = "0x6002904")]
		[Address(RVA = "0x3DE0160", Offset = "0x3DE0160", VA = "0x3DE0160")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__ScaleMode()
		{
			return null;
		}

		[Token(Token = "0x6002905")]
		[Address(RVA = "0x3DE0240", Offset = "0x3DE0240", VA = "0x3DE0240")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetIcon()
		{
			return null;
		}

		[Token(Token = "0x6002906")]
		[Address(RVA = "0x3DE0390", Offset = "0x3DE0390", VA = "0x3DE0390")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetTintColor()
		{
			return null;
		}
	}

	[Token(Token = "0x4001095")]
	[FieldOffset(Offset = "0x60")]
	private readonly Image _image;

	[Token(Token = "0x4001096")]
	[FieldOffset(Offset = "0x68")]
	private string _currentIconPath;

	[Token(Token = "0x1700084B")]
	public string IconPath
	{
		[Token(Token = "0x60028F8")]
		[Address(RVA = "0x3DDFBF0", Offset = "0x3DDFBF0", VA = "0x3DDFBF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028F9")]
		[Address(RVA = "0x3DDFC00", Offset = "0x3DDFC00", VA = "0x3DDFC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700084C")]
	public int ScaleMode
	{
		[Token(Token = "0x60028FB")]
		[Address(RVA = "0x3DDFC50", Offset = "0x3DDFC50", VA = "0x3DDFC50")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60028FC")]
		[Address(RVA = "0x3DDFC70", Offset = "0x3DDFC70", VA = "0x3DDFC70")]
		set
		{
		}
	}

	[Token(Token = "0x1700084D")]
	public override string ClassName
	{
		[Token(Token = "0x60028FD")]
		[Address(RVA = "0x3DDFDB0", Offset = "0x3DDFDB0", VA = "0x3DDFDB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700084E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028FE")]
		[Address(RVA = "0x3DDFDE0", Offset = "0x3DDFDE0", VA = "0x3DDFDE0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700084F")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028FF")]
		[Address(RVA = "0x3DDFDF0", Offset = "0x3DDFDF0", VA = "0x3DDFDF0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000850")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002900")]
		[Address(RVA = "0x3DDFE00", Offset = "0x3DDFE00", VA = "0x3DDFE00", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60028F6")]
	[Address(RVA = "0x3DDF990", Offset = "0x3DDF990", VA = "0x3DDF990")]
	public CustomLogicIconBuiltin(Image image)
	{
	}

	[Token(Token = "0x60028F7")]
	[Address(RVA = "0x3DDF9E0", Offset = "0x3DDF9E0", VA = "0x3DDF9E0")]
	public CustomLogicIconBuiltin SetIcon(string iconPath)
	{
		return null;
	}

	[Token(Token = "0x60028FA")]
	[Address(RVA = "0x3DDFC10", Offset = "0x3DDFC10", VA = "0x3DDFC10")]
	public CustomLogicIconBuiltin SetTintColor(CustomLogicColorBuiltin color)
	{
		return null;
	}
}
