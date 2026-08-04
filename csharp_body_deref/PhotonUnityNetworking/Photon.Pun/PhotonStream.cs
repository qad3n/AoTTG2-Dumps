// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PunClasses.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3EFAF10", Offset = "0x3EFAF10", VA = "0x3EFAF10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x3EFAF20", Offset = "0x3EFAF20", VA = "0x3EFAF20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool IsReading
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x3EFAF30", Offset = "0x3EFAF30", VA = "0x3EFAF30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public int Count
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3EF46D0", Offset = "0x3EF46D0", VA = "0x3EF46D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3EE25E0", Offset = "0x3EE25E0", VA = "0x3EE25E0")]
	public PhotonStream(bool write, object[] incomingData)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x3EF57D0", Offset = "0x3EF57D0", VA = "0x3EF57D0")]
	public void SetReadStream(object[] incomingData, int pos = 0)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x3EF43C0", Offset = "0x3EF43C0", VA = "0x3EF43C0")]
	internal void SetWriteStream(List<object> newWriteData, int pos = 0)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3EFAF40", Offset = "0x3EFAF40", VA = "0x3EFAF40")]
	internal List<object> GetWriteStream()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x3EFAF50", Offset = "0x3EFAF50", VA = "0x3EFAF50")]
	[Obsolete("Either SET the writeData with an empty List or use Clear().")]
	internal void ResetWriteStream()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x3EF8E80", Offset = "0x3EF8E80", VA = "0x3EF8E80")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x3EFAFA0", Offset = "0x3EFAFA0", VA = "0x3EFAFA0")]
	public object PeekNext()
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3EF44D0", Offset = "0x3EF44D0", VA = "0x3EF44D0")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3EFB030", Offset = "0x3EFB030", VA = "0x3EFB030")]
	[Obsolete("writeData is a list now. Use and re-use it directly.")]
	public bool CopyToListAndClear(List<object> target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3EFB0C0", Offset = "0x3EFB0C0", VA = "0x3EFB0C0")]
	public object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3EFB110", Offset = "0x3EFB110", VA = "0x3EFB110")]
	public void Serialize(ref bool myBool)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3EFB230", Offset = "0x3EFB230", VA = "0x3EFB230")]
	public void Serialize(ref int myInt)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3EFB350", Offset = "0x3EFB350", VA = "0x3EFB350")]
	public void Serialize(ref string value)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3EFB460", Offset = "0x3EFB460", VA = "0x3EFB460")]
	public void Serialize(ref char value)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3EFB590", Offset = "0x3EFB590", VA = "0x3EFB590")]
	public void Serialize(ref short value)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3EFB6C0", Offset = "0x3EFB6C0", VA = "0x3EFB6C0")]
	public void Serialize(ref float obj)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3EFB7E0", Offset = "0x3EFB7E0", VA = "0x3EFB7E0")]
	public void Serialize(ref Player obj)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3EFB940", Offset = "0x3EFB940", VA = "0x3EFB940")]
	public void Serialize(ref Vector3 obj)
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3EFBA80", Offset = "0x3EFBA80", VA = "0x3EFBA80")]
	public void Serialize(ref Vector2 obj)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3EFBBB0", Offset = "0x3EFBBB0", VA = "0x3EFBBB0")]
	public void Serialize(ref Quaternion obj)
	{
	}
}
