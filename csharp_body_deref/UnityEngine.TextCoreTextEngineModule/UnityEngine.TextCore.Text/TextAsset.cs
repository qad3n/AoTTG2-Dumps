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
		[Address(RVA = "0x4B909E0", Offset = "0x4B909E0", VA = "0x4B909E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4B909F0", Offset = "0x4B909F0", VA = "0x4B909F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public int instanceID
	{
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x4B84960", Offset = "0x4B84960", VA = "0x4B84960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000028")]
	public int hashCode
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x4B8D190", Offset = "0x4B8D190", VA = "0x4B8D190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4B90A00", Offset = "0x4B90A00", VA = "0x4B90A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public Material material
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4B90A10", Offset = "0x4B90A10", VA = "0x4B90A10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x4B90A20", Offset = "0x4B90A20", VA = "0x4B90A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int materialHashCode
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x4B8D1C0", Offset = "0x4B8D1C0", VA = "0x4B8D1C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x4B90A30", Offset = "0x4B90A30", VA = "0x4B90A30")]
		set
		{
		}
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4B8A920", Offset = "0x4B8A920", VA = "0x4B8A920")]
	protected TextAsset()
	{
	}
}
