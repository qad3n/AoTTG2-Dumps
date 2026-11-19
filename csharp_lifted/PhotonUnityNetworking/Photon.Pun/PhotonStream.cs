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

[Token(Token = "0x2000020")]
public class PhotonStream
{
	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x10")]
	private List<object> writeData;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x18")]
	private object[] readData;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x20")]
	private int currentItem;

	[Token(Token = "0x17000042")]
	public bool IsWriting
	{
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x56E6520", Offset = "0x56E5520", VA = "0x56E6520")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x56E6530", Offset = "0x56E5530", VA = "0x56E6530")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool IsReading
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x56E6540", Offset = "0x56E5540", VA = "0x56E6540")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public int Count
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x56DFEB0", Offset = "0x56DEEB0", VA = "0x56DFEB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x56CE5B0", Offset = "0x56CD5B0", VA = "0x56CE5B0")]
	public PhotonStream(bool write, object[] incomingData)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x56E0F70", Offset = "0x56DFF70", VA = "0x56E0F70")]
	public void SetReadStream(object[] incomingData, int pos = 0)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x56DFBA0", Offset = "0x56DEBA0", VA = "0x56DFBA0")]
	internal void SetWriteStream(List<object> newWriteData, int pos = 0)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x56E6550", Offset = "0x56E5550", VA = "0x56E6550")]
	internal List<object> GetWriteStream()
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x56E6560", Offset = "0x56E5560", VA = "0x56E6560")]
	[Obsolete("Either SET the writeData with an empty List or use Clear().")]
	internal void ResetWriteStream()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x56E4590", Offset = "0x56E3590", VA = "0x56E4590")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x56E65B0", Offset = "0x56E55B0", VA = "0x56E65B0")]
	public object PeekNext()
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x56DFCB0", Offset = "0x56DECB0", VA = "0x56DFCB0")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x56E6640", Offset = "0x56E5640", VA = "0x56E6640")]
	[Obsolete("writeData is a list now. Use and re-use it directly.")]
	public bool CopyToListAndClear(List<object> target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x56E66D0", Offset = "0x56E56D0", VA = "0x56E66D0")]
	public object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x56E6720", Offset = "0x56E5720", VA = "0x56E6720")]
	public void Serialize(ref bool myBool)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x56E6840", Offset = "0x56E5840", VA = "0x56E6840")]
	public void Serialize(ref int myInt)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x56E6960", Offset = "0x56E5960", VA = "0x56E6960")]
	public void Serialize(ref string value)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x56E6A70", Offset = "0x56E5A70", VA = "0x56E6A70")]
	public void Serialize(ref char value)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x56E6BA0", Offset = "0x56E5BA0", VA = "0x56E6BA0")]
	public void Serialize(ref short value)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x56E6CC0", Offset = "0x56E5CC0", VA = "0x56E6CC0")]
	public void Serialize(ref float obj)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x56E6DF0", Offset = "0x56E5DF0", VA = "0x56E6DF0")]
	public void Serialize(ref Player obj)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x56E6F50", Offset = "0x56E5F50", VA = "0x56E6F50")]
	public void Serialize(ref Vector3 obj)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x56E7090", Offset = "0x56E6090", VA = "0x56E7090")]
	public void Serialize(ref Vector2 obj)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x56E71C0", Offset = "0x56E61C0", VA = "0x56E71C0")]
	public void Serialize(ref Quaternion obj)
	{
	}
}
