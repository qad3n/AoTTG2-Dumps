// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshGenerationNodeManager
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6CBF270", Offset = "0x6CBE270", VA = "0x6CBF270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001348")]
		[Address(RVA = "0x6CBF280", Offset = "0x6CBE280", VA = "0x6CBF280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x6CBEFD0", Offset = "0x6CBDFD0", VA = "0x6CBEFD0")]
	public MeshGenerationNodeManager(EntryRecorder entryRecorder)
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x6CBE200", Offset = "0x6CBD200", VA = "0x6CBE200")]
	public void CreateNode(Entry parentEntry, out MeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x6CBE280", Offset = "0x6CBD280", VA = "0x6CBE280")]
	public void CreateUnsafeNode(Entry parentEntry, out UnsafeMeshGenerationNode node)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x6CBF060", Offset = "0x6CBE060", VA = "0x6CBF060")]
	private MeshGenerationNodeImpl CreateImpl(Entry parentEntry, bool safe)
	{
		return null;
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x6CBF1F0", Offset = "0x6CBE1F0", VA = "0x6CBF1F0")]
	public void ResetAll()
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x6CBF290", Offset = "0x6CBE290", VA = "0x6CBF290", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x6CBF2F0", Offset = "0x6CBE2F0", VA = "0x6CBF2F0")]
	protected void Dispose(bool disposing)
	{
	}
}
