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
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public bool IsReading
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x1A55940", Offset = "0x1A53F40", VA = "0x181A55940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000044")]
	public int Count
	{
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x1D4CE10", Offset = "0x1D4B410", VA = "0x181D4CE10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x1D4CDC0", Offset = "0x1D4B3C0", VA = "0x181D4CDC0")]
	public PhotonStream(bool write, object[] incomingData)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x1D4CBF0", Offset = "0x1D4B1F0", VA = "0x181D4CBF0")]
	public void SetReadStream(object[] incomingData, int pos = 0)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x1D4CC20", Offset = "0x1D4B220", VA = "0x181D4CC20")]
	internal void SetWriteStream(List<object> newWriteData, int pos = 0)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	internal List<object> GetWriteStream()
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x1D4C120", Offset = "0x1D4A720", VA = "0x181D4C120")]
	[Obsolete("Either SET the writeData with an empty List or use Clear().")]
	internal void ResetWriteStream()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x1D4C090", Offset = "0x1D4A690", VA = "0x181D4C090")]
	public object ReceiveNext()
	{
		return null;
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x1D4C000", Offset = "0x1D4A600", VA = "0x181D4C000")]
	public object PeekNext()
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x1D4C180", Offset = "0x1D4A780", VA = "0x181D4C180")]
	public void SendNext(object obj)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x1D4BF60", Offset = "0x1D4A560", VA = "0x181D4BF60")]
	[Obsolete("writeData is a list now. Use and re-use it directly.")]
	public bool CopyToListAndClear(List<object> target)
	{
		return default(bool);
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x1D4CD60", Offset = "0x1D4B360", VA = "0x181D4CD60")]
	public object[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x1D4C220", Offset = "0x1D4A820", VA = "0x181D4C220")]
	public void Serialize(ref bool myBool)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x1D4C720", Offset = "0x1D4AD20", VA = "0x181D4C720")]
	public void Serialize(ref int myInt)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x1D4C310", Offset = "0x1D4A910", VA = "0x181D4C310")]
	public void Serialize(ref string value)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x1D4C630", Offset = "0x1D4AC30", VA = "0x181D4C630")]
	public void Serialize(ref char value)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x1D4CA00", Offset = "0x1D4B000", VA = "0x181D4CA00")]
	public void Serialize(ref short value)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x1D4C910", Offset = "0x1D4AF10", VA = "0x181D4C910")]
	public void Serialize(ref float obj)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x1D4C500", Offset = "0x1D4AB00", VA = "0x181D4C500")]
	public void Serialize(ref Player obj)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x1D4C800", Offset = "0x1D4AE00", VA = "0x181D4C800")]
	public void Serialize(ref Vector3 obj)
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x1D4C400", Offset = "0x1D4AA00", VA = "0x181D4C400")]
	public void Serialize(ref Vector2 obj)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x1D4CAF0", Offset = "0x1D4B0F0", VA = "0x181D4CAF0")]
	public void Serialize(ref Quaternion obj)
	{
	}
}
