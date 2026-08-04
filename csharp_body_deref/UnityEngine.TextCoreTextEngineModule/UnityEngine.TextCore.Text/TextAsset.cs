// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200001A")]
[ExcludeFromObjectFactory]
public abstract class TextAsset : ScriptableObject
{
	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal string m_Version;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x20")]
	internal int m_InstanceID;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x24")]
	internal int m_HashCode;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[FormerlySerializedAs("material")]
	internal Material m_Material;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x30")]
	internal int m_MaterialHashCode;

	[Token(Token = "0x17000026")]
	public string version
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x4EB8310", Offset = "0x4EB8310", VA = "0x4EB8310")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4EB8320", Offset = "0x4EB8320", VA = "0x4EB8320")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public int instanceID
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x4EAC290", Offset = "0x4EAC290", VA = "0x4EAC290")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000028")]
	public int hashCode
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x4EB4AC0", Offset = "0x4EB4AC0", VA = "0x4EB4AC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4EB8330", Offset = "0x4EB8330", VA = "0x4EB8330")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public Material material
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4EB8340", Offset = "0x4EB8340", VA = "0x4EB8340")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x4EB8350", Offset = "0x4EB8350", VA = "0x4EB8350")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int materialHashCode
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x4EB4AF0", Offset = "0x4EB4AF0", VA = "0x4EB4AF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x4EB8360", Offset = "0x4EB8360", VA = "0x4EB8360")]
		set
		{
		}
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4EB2250", Offset = "0x4EB2250", VA = "0x4EB2250")]
	protected TextAsset()
	{
	}
}
