// ==================== AoTTG2 cross-reference ====================
// Type: System.Resources.ResourceFallbackManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Resources;

[Token(Token = "0x20004DF")]
internal class ResourceFallbackManager : IEnumerable<CultureInfo>, IEnumerable
{
	[Token(Token = "0x20004E0")]
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

		[Token(Token = "0x1700048B")]
		private CultureInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EGlobalization_002ECultureInfo_003E_002ECurrent
		{
			[Token(Token = "0x60023C6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700048C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60023C8")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60023C3")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60023C4")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60023C5")]
		[Address(RVA = "0x1A58890", Offset = "0x1A56E90", VA = "0x181A58890", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60023C7")]
		[Address(RVA = "0x1A58AE0", Offset = "0x1A570E0", VA = "0x181A58AE0", Slot = "8")]
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

	[Token(Token = "0x60023C0")]
	[Address(RVA = "0x1A4CF70", Offset = "0x1A4B570", VA = "0x181A4CF70")]
	internal ResourceFallbackManager(CultureInfo startingCulture, CultureInfo neutralResourcesCulture, bool useParents)
	{
	}

	[Token(Token = "0x60023C1")]
	[Address(RVA = "0x1A4CF00", Offset = "0x1A4B500", VA = "0x181A4CF00", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60023C2")]
	[Address(RVA = "0x1A4CF00", Offset = "0x1A4B500", VA = "0x181A4CF00", Slot = "4")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__5))]
	public IEnumerator<CultureInfo> GetEnumerator()
	{
		return null;
	}
}
