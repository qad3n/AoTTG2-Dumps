using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200000C")]
public abstract class TMP_Asset : ScriptableObject
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x18")]
	private int m_InstanceID;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x1C")]
	public int hashCode;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x20")]
	public Material material;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x28")]
	public int materialHashCode;

	[Token(Token = "0x17000002")]
	public int instanceID
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x48F7530", Offset = "0x48F7530", VA = "0x48F7530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x48F7550", Offset = "0x48F7550", VA = "0x48F7550")]
	protected TMP_Asset()
	{
	}
}
