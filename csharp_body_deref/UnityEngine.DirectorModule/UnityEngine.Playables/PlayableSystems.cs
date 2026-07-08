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
				[Address(RVA = "0x4B157A0", Offset = "0x4B157A0", VA = "0x4B157A0", Slot = "4")]
				get
				{
					return default(DataPlayableOutput);
				}
			}

			[Token(Token = "0x17000004")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x6000014")]
				[Address(RVA = "0x4B15890", Offset = "0x4B15890", VA = "0x4B15890", Slot = "7")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000012")]
			[Address(RVA = "0x4B15700", Offset = "0x4B15700", VA = "0x4B15700")]
			public DataPlayableOutputEnumerator(DataPlayableOutputList list)
			{
			}

			[Token(Token = "0x6000015")]
			[Address(RVA = "0x4B158E0", Offset = "0x4B158E0", VA = "0x4B158E0", Slot = "5")]
			public void Dispose()
			{
			}

			[Token(Token = "0x6000016")]
			[Address(RVA = "0x4B15900", Offset = "0x4B15900", VA = "0x4B15900", Slot = "6")]
			public bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x6000017")]
			[Address(RVA = "0x4B15920", Offset = "0x4B15920", VA = "0x4B15920", Slot = "8")]
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
			[Address(RVA = "0x4B15570", Offset = "0x4B15570", VA = "0x4B15570", Slot = "4")]
			get
			{
				return default(DataPlayableOutput);
			}
		}

		[Token(Token = "0x17000002")]
		public int Count
		{
			[Token(Token = "0x600000F")]
			[Address(RVA = "0x4B15680", Offset = "0x4B15680", VA = "0x4B15680", Slot = "5")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B152E0", Offset = "0x4B152E0", VA = "0x4B152E0")]
		public unsafe DataPlayableOutputList(PlayableOutputHandle* outputs, int count)
		{
		}

		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B15690", Offset = "0x4B15690", VA = "0x4B15690", Slot = "6")]
		public IEnumerator<DataPlayableOutput> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B15730", Offset = "0x4B15730", VA = "0x4B15730", Slot = "7")]
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
	[Address(RVA = "0x4B150F0", Offset = "0x4B150F0", VA = "0x4B150F0")]
	private static int CombineTypeAndIndex(int typeIndex, PlayableSystemStage stage)
	{
		return default(int);
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4B15100", Offset = "0x4B15100", VA = "0x4B15100")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static bool Internal_CallSystemDelegate(int systemIndex, PlayableSystemStage stage, IntPtr outputsPtr, int numOutputs)
	{
		return default(bool);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4B15310", Offset = "0x4B15310", VA = "0x4B15310")]
	static PlayableSystems()
	{
	}
}
