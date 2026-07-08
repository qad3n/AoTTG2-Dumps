using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Photon.Pun;

[Token(Token = "0x2000022")]
public class PhotonStream
{
	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x10")]
	private List<object> writeData;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x18")]
	private object[] readData;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x20")]
	private int currentItem;

	[Token(Token = "0x17000042")]
	public bool IsWriting
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x3C17A10", Offset = "0x3C17A10", VA = "0x3C17A10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x3C17A20", Offset = "0x3C17A20", VA = "0x3C17A20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool IsReading
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x3C17A30", Offset = "0x3C17A30", VA = "0x3C17A30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public int Count
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3C111D0", Offset = "0x3C111D0", VA = "0x3C111D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3BFF0E0", Offset = "0x3BFF0E0", VA = "0x3BFF0E0")]
	public PhotonStream(bool write, object[] incomingData)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x3C122D0", Offset = "0x3C122D0", VA = "0x3C122D0")]
	public void SetReadStream(object[] incomingData, int pos = 0)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x3C10EC0", Offset = "0x3C10EC0", VA = "0x3C10EC0")]
	internal void SetWriteStream(List<object> newWriteData, int pos = 0)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3C17A40", Offset = "0x3C17A40", VA = "0x3C17A40")]
	internal List<object> GetWriteStream()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x3C17A50", Offset = "0x3C17A50", VA = "0x3C17A50")]
	[Obsolete("Either SET the writeData with an empty List or use Clear().")]
	internal void ResetWriteStream()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x3C15980", Offset = "0x3C15980", VA = "0x3C15980")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x3C17AA0", Offset = "0x3C17AA0", VA = "0x3C17AA0")]
	public object PeekNext()
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3C10FD0", Offset = "0x3C10FD0", VA = "0x3C10FD0")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3C17B30", Offset = "0x3C17B30", VA = "0x3C17B30")]
	[Obsolete("writeData is a list now. Use and re-use it directly.")]
	public bool CopyToListAndClear(List<object> target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3C17BC0", Offset = "0x3C17BC0", VA = "0x3C17BC0")]
	public object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3C17C10", Offset = "0x3C17C10", VA = "0x3C17C10")]
	public void Serialize(ref bool myBool)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3C17D30", Offset = "0x3C17D30", VA = "0x3C17D30")]
	public void Serialize(ref int myInt)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3C17E50", Offset = "0x3C17E50", VA = "0x3C17E50")]
	public void Serialize(ref string value)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3C17F60", Offset = "0x3C17F60", VA = "0x3C17F60")]
	public void Serialize(ref char value)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3C18090", Offset = "0x3C18090", VA = "0x3C18090")]
	public void Serialize(ref short value)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3C181C0", Offset = "0x3C181C0", VA = "0x3C181C0")]
	public void Serialize(ref float obj)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3C182E0", Offset = "0x3C182E0", VA = "0x3C182E0")]
	public void Serialize(ref Player obj)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3C18440", Offset = "0x3C18440", VA = "0x3C18440")]
	public void Serialize(ref Vector3 obj)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3C18580", Offset = "0x3C18580", VA = "0x3C18580")]
	public void Serialize(ref Vector2 obj)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3C186B0", Offset = "0x3C186B0", VA = "0x3C186B0")]
	public void Serialize(ref Quaternion obj)
	{
	}
}
