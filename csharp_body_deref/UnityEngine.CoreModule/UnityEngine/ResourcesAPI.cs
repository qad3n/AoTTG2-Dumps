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

[Token(Token = "0x200016A")]
public class ResourcesAPI
{
	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x0")]
	private static ResourcesAPI s_DefaultAPI;

	[Token(Token = "0x1700021A")]
	internal static ResourcesAPI ActiveAPI
	{
		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x690F4D0", Offset = "0x690E4D0", VA = "0x690F4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700021B")]
	public static ResourcesAPI overrideAPI
	{
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x690F5B0", Offset = "0x690E5B0", VA = "0x690F5B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x690F620", Offset = "0x690E620", VA = "0x690F620")]
	protected internal ResourcesAPI()
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x690F630", Offset = "0x690E630", VA = "0x690F630", Slot = "4")]
	protected internal virtual Object[] FindObjectsOfTypeAll(Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x690F660", Offset = "0x690E660", VA = "0x690F660", Slot = "5")]
	protected internal virtual Shader FindShaderByName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x690F670", Offset = "0x690E670", VA = "0x690F670", Slot = "6")]
	protected internal virtual Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x690F680", Offset = "0x690E680", VA = "0x690F680", Slot = "7")]
	protected internal virtual Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x690F690", Offset = "0x690E690", VA = "0x690F690", Slot = "8")]
	protected internal virtual ResourceRequest LoadAsync(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x690F6E0", Offset = "0x690E6E0", VA = "0x690F6E0", Slot = "9")]
	protected internal virtual void UnloadAsset(Object assetToUnload)
	{
	}
}
