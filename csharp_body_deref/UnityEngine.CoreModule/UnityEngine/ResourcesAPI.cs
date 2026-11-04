// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ResourcesAPI
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000169")]
public class ResourcesAPI
{
	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x0")]
	private static ResourcesAPI s_DefaultAPI;

	[Token(Token = "0x17000215")]
	internal static ResourcesAPI ActiveAPI
	{
		[Token(Token = "0x6000C76")]
		[Address(RVA = "0x2F25F00", Offset = "0x2F24500", VA = "0x182F25F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000216")]
	public static ResourcesAPI overrideAPI
	{
		[Token(Token = "0x6000C77")]
		[Address(RVA = "0x2F25FC0", Offset = "0x2F245C0", VA = "0x182F25FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected internal ResourcesAPI()
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x2F25D20", Offset = "0x2F24320", VA = "0x182F25D20", Slot = "4")]
	protected internal virtual Object[] FindObjectsOfTypeAll(Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x2F25D60", Offset = "0x2F24360", VA = "0x182F25D60", Slot = "5")]
	protected internal virtual Shader FindShaderByName(string name)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x2F25E00", Offset = "0x2F24400", VA = "0x182F25E00", Slot = "6")]
	protected internal virtual Object Load(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x2F25D70", Offset = "0x2F24370", VA = "0x182F25D70", Slot = "7")]
	protected internal virtual Object[] LoadAll(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x2F25D90", Offset = "0x2F24390", VA = "0x182F25D90", Slot = "8")]
	protected internal virtual ResourceRequest LoadAsync(string path, Type systemTypeInstance)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x2F25E20", Offset = "0x2F24420", VA = "0x182F25E20", Slot = "9")]
	protected internal virtual void UnloadAsset(Object assetToUnload)
	{
	}
}
