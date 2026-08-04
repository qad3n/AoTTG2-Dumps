// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ResourcesAPI
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200013C")]
public class ResourcesAPI
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x0")]
	private static ResourcesAPI s_DefaultAPI;

	[Token(Token = "0x170001AE")]
	internal static ResourcesAPI ActiveAPI
	{
		[Token(Token = "0x6000955")]
		[Address(RVA = "0x4DF2840", Offset = "0x4DF2840", VA = "0x4DF2840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	public static ResourcesAPI overrideAPI
	{
		[Token(Token = "0x6000956")]
		[Address(RVA = "0x4DF2920", Offset = "0x4DF2920", VA = "0x4DF2920")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x4DF2990", Offset = "0x4DF2990", VA = "0x4DF2990")]
	protected internal ResourcesAPI()
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x4DF29A0", Offset = "0x4DF29A0", VA = "0x4DF29A0", Slot = "4")]
	protected internal virtual Object[] FindObjectsOfTypeAll(Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x4DF29D0", Offset = "0x4DF29D0", VA = "0x4DF29D0", Slot = "5")]
	protected internal virtual Shader FindShaderByName(string name)
	{
		return null;
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x4DF2A00", Offset = "0x4DF2A00", VA = "0x4DF2A00", Slot = "6")]
	protected internal virtual Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x4DF2A40", Offset = "0x4DF2A40", VA = "0x4DF2A40", Slot = "7")]
	protected internal virtual Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x4DF2A80", Offset = "0x4DF2A80", VA = "0x4DF2A80", Slot = "8")]
	protected internal virtual ResourceRequest LoadAsync(string path, Type systemTypeInstance)
	{
		return null;
	}
}
