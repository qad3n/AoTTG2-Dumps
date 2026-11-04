// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableSystems
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.StaticAccessor("PlayableSystemsBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/Director/ScriptBindings/PlayableSystems.bindings.h")]
internal static class PlayableSystems
{
	[Token(Token = "0x2000006")]
	public delegate void PlayableSystemDelegate(IReadOnlyList<DataPlayableOutput> outputs);

	[Token(Token = "0x2000007")]
	public enum PlayableSystemStage : ushort
	{
		[Token(Token = "0x4000009")]
		FixedUpdate,
		[Token(Token = "0x400000A")]
		FixedUpdatePostPhysics,
		[Token(Token = "0x400000B")]
		Update,
		[Token(Token = "0x400000C")]
		AnimationBegin,
		[Token(Token = "0x400000D")]
		AnimationEnd,
		[Token(Token = "0x400000E")]
		LateUpdate,
		[Token(Token = "0x400000F")]
		Render
	}

	[Token(Token = "0x2000008")]
	private class DataPlayableOutputList : IReadOnlyList<DataPlayableOutput>, IEnumerable<DataPlayableOutput>, IEnumerable, IReadOnlyCollection<DataPlayableOutput>
	{
		[Token(Token = "0x2000009")]
		private class DataPlayableOutputEnumerator : IEnumerator<DataPlayableOutput>, IEnumerator, IDisposable
		{
			[Token(Token = "0x4000012")]
			[FieldOffset(Offset = "0x10")]
			private DataPlayableOutputList m_List;

			[Token(Token = "0x4000013")]
			[FieldOffset(Offset = "0x18")]
			private int m_Index;

			[Token(Token = "0x17000003")]
			public DataPlayableOutput Current
			{
				[Token(Token = "0x6000013")]
				[Address(RVA = "0x2F7A730", Offset = "0x2F78D30", VA = "0x182F7A730", Slot = "4")]
				get
				{
					return default(DataPlayableOutput);
				}
			}

			[Token(Token = "0x17000004")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000014")]
				[Address(RVA = "0x2F7A6D0", Offset = "0x2F78CD0", VA = "0x182F7A6D0", Slot = "7")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000012")]
			[Address(RVA = "0x1A7BE00", Offset = "0x1A7A400", VA = "0x181A7BE00")]
			public DataPlayableOutputEnumerator(DataPlayableOutputList list)
			{
			}

			[Token(Token = "0x6000015")]
			[Address(RVA = "0x1A5E5A0", Offset = "0x1A5CBA0", VA = "0x181A5E5A0", Slot = "5")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6000016")]
			[Address(RVA = "0x2F7A6A0", Offset = "0x2F78CA0", VA = "0x182F7A6A0", Slot = "6")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000017")]
			[Address(RVA = "0x1B5AFF0", Offset = "0x1B595F0", VA = "0x181B5AFF0", Slot = "8")]
			public void Reset()
			{
			}
		}

		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x10")]
		private unsafe PlayableOutputHandle* m_Outputs;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x18")]
		private int m_Count;

		[Token(Token = "0x17000001")]
		public DataPlayableOutput this[int index]
		{
			[Token(Token = "0x600000E")]
			[Address(RVA = "0x2F7A9A0", Offset = "0x2F78FA0", VA = "0x182F7A9A0", Slot = "4")]
			get
			{
				return default(DataPlayableOutput);
			}
		}

		[Token(Token = "0x17000002")]
		public int Count
		{
			[Token(Token = "0x600000F")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600000D")]
		[Address(RVA = "0x2F7A960", Offset = "0x2F78F60", VA = "0x182F7A960")]
		public unsafe DataPlayableOutputList(PlayableOutputHandle* outputs, int count)
		{
		}

		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2F7A8F0", Offset = "0x2F78EF0", VA = "0x182F7A8F0", Slot = "6")]
		public IEnumerator<DataPlayableOutput> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000011")]
		[Address(RVA = "0x2F7A8F0", Offset = "0x2F78EF0", VA = "0x182F7A8F0", Slot = "7")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<int, Type> s_SystemTypes;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, PlayableSystemDelegate> s_Delegates;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private static ReaderWriterLockSlim s_RWLock;

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2F7AE80", Offset = "0x2F79480", VA = "0x182F7AE80")]
	private static int CombineTypeAndIndex(int typeIndex, PlayableSystemStage stage)
	{
		return default(int);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2F7AE90", Offset = "0x2F79490", VA = "0x182F7AE90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool Internal_CallSystemDelegate(int systemIndex, PlayableSystemStage stage, IntPtr outputsPtr, int numOutputs)
	{
		return default(bool);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2F7B090", Offset = "0x2F79690", VA = "0x182F7B090")]
	static PlayableSystems()
	{
	}
}
