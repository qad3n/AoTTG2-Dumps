using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004AF")]
internal class ResourceFallbackManager : IEnumerable<CultureInfo>, IEnumerable
{
	[Token(Token = "0x20004B0")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__5 : IEnumerator<CultureInfo>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400134C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400134D")]
		[FieldOffset(Offset = "0x18")]
		private CultureInfo _003C_003E2__current;

		[Token(Token = "0x400134E")]
		[FieldOffset(Offset = "0x20")]
		public System.Resources.ResourceFallbackManager _003C_003E4__this;

		[Token(Token = "0x400134F")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CreachedNeutralResourcesCulture_003E5__2;

		[Token(Token = "0x4001350")]
		[FieldOffset(Offset = "0x30")]
		private CultureInfo _003CcurrentCulture_003E5__3;

		[Token(Token = "0x17000488")]
		private CultureInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EGlobalization_002ECultureInfo_003E_002ECurrent
		{
			[Token(Token = "0x6002344")]
			[Address(RVA = "0x4EDECC0", Offset = "0x4EDECC0", VA = "0x4EDECC0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000489")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002346")]
			[Address(RVA = "0x4EDED10", Offset = "0x4EDED10", VA = "0x4EDED10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002341")]
		[Address(RVA = "0x4EDEA70", Offset = "0x4EDEA70", VA = "0x4EDEA70")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002342")]
		[Address(RVA = "0x4EDEA90", Offset = "0x4EDEA90", VA = "0x4EDEA90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002343")]
		[Address(RVA = "0x4EDEAA0", Offset = "0x4EDEAA0", VA = "0x4EDEAA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002345")]
		[Address(RVA = "0x4EDECD0", Offset = "0x4EDECD0", VA = "0x4EDECD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001349")]
	[FieldOffset(Offset = "0x10")]
	private CultureInfo m_startingCulture;

	[Token(Token = "0x400134A")]
	[FieldOffset(Offset = "0x18")]
	private CultureInfo m_neutralResourcesCulture;

	[Token(Token = "0x400134B")]
	[FieldOffset(Offset = "0x20")]
	private bool m_useParents;

	[Token(Token = "0x600233E")]
	[Address(RVA = "0x4EDE8F0", Offset = "0x4EDE8F0", VA = "0x4EDE8F0")]
	internal ResourceFallbackManager(CultureInfo startingCulture, CultureInfo neutralResourcesCulture, bool useParents)
	{
	}

	[Token(Token = "0x600233F")]
	[Address(RVA = "0x4EDE990", Offset = "0x4EDE990", VA = "0x4EDE990", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002340")]
	[Address(RVA = "0x4EDEA00", Offset = "0x4EDEA00", VA = "0x4EDEA00", Slot = "4")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__5))]
	public IEnumerator<CultureInfo> GetEnumerator()
	{
		return null;
	}
}
