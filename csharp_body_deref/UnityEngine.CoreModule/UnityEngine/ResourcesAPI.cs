using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000139")]
public class ResourcesAPI
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x0")]
	private static ResourcesAPI s_DefaultAPI;

	[Token(Token = "0x170001AD")]
	internal static ResourcesAPI ActiveAPI
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x4ACAF10", Offset = "0x4ACAF10", VA = "0x4ACAF10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AE")]
	public static ResourcesAPI overrideAPI
	{
		[Token(Token = "0x6000954")]
		[Address(RVA = "0x4ACAFF0", Offset = "0x4ACAFF0", VA = "0x4ACAFF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x4ACB060", Offset = "0x4ACB060", VA = "0x4ACB060")]
	protected internal ResourcesAPI()
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x4ACB070", Offset = "0x4ACB070", VA = "0x4ACB070", Slot = "4")]
	protected internal virtual Object[] FindObjectsOfTypeAll(Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x4ACB0A0", Offset = "0x4ACB0A0", VA = "0x4ACB0A0", Slot = "5")]
	protected internal virtual Shader FindShaderByName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x4ACB0D0", Offset = "0x4ACB0D0", VA = "0x4ACB0D0", Slot = "6")]
	protected internal virtual Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x4ACB110", Offset = "0x4ACB110", VA = "0x4ACB110", Slot = "7")]
	protected internal virtual Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x4ACB150", Offset = "0x4ACB150", VA = "0x4ACB150", Slot = "8")]
	protected internal virtual ResourceRequest LoadAsync(string path, Type systemTypeInstance)
	{
		return null;
	}
}
