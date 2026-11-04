// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationNodeManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D8")]
internal class MeshGenerationNodeManager : IDisposable
{
	[Token(Token = "0x4000B09")]
	[FieldOffset(Offset = "0x10")]
	private List<MeshGenerationNodeImpl> m_Nodes;

	[Token(Token = "0x4000B0A")]
	[FieldOffset(Offset = "0x18")]
	private int m_UsedCounter;

	[Token(Token = "0x4000B0B")]
	[FieldOffset(Offset = "0x20")]
	private EntryRecorder m_EntryRecorder;

	[Token(Token = "0x170003ED")]
	protected bool disposed
	{
		[Token(Token = "0x6001347")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001348")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x32B0A20", Offset = "0x32AF020", VA = "0x1832B0A20")]
	public MeshGenerationNodeManager(EntryRecorder entryRecorder)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x32B05B0", Offset = "0x32AEBB0", VA = "0x1832B05B0")]
	public void CreateNode(Entry parentEntry, out MeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x32B05E0", Offset = "0x32AEBE0", VA = "0x1832B05E0")]
	public void CreateUnsafeNode(Entry parentEntry, out UnsafeMeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x32B0390", Offset = "0x32AE990", VA = "0x1832B0390")]
	private MeshGenerationNodeImpl CreateImpl(Entry parentEntry, bool safe)
	{
		return null;
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x32B0900", Offset = "0x32AEF00", VA = "0x1832B0900")]
	public void ResetAll()
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x32B0610", Offset = "0x32AEC10", VA = "0x1832B0610", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x32B07A0", Offset = "0x32AEDA0", VA = "0x1832B07A0")]
	protected void Dispose(bool disposing)
	{
	}
}
