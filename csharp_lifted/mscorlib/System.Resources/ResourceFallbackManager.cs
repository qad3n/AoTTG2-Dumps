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

[Token(Token = "0x20004B8")]
internal class ResourceFallbackManager : IEnumerable<CultureInfo>, IEnumerable
{
	[Token(Token = "0x20004B9")]
	[CompilerGenerated]
	private sealed class _003CGetEnumerator_003Ed__5 : IEnumerator<CultureInfo>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40012AC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40012AD")]
		[FieldOffset(Offset = "0x18")]
		private CultureInfo _003C_003E2__current;

		[Token(Token = "0x40012AE")]
		[FieldOffset(Offset = "0x20")]
		public System.Resources.ResourceFallbackManager _003C_003E4__this;

		[Token(Token = "0x40012AF")]
		[FieldOffset(Offset = "0x28")]
		private bool _003CreachedNeutralResourcesCulture_003E5__2;

		[Token(Token = "0x40012B0")]
		[FieldOffset(Offset = "0x30")]
		private CultureInfo _003CcurrentCulture_003E5__3;

		[Token(Token = "0x1700048A")]
		private CultureInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EGlobalization_002ECultureInfo_003E_002ECurrent
		{
			[Token(Token = "0x6002394")]
			[Address(RVA = "0x53CC230", Offset = "0x53CB230", VA = "0x53CC230", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700048B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002396")]
			[Address(RVA = "0x53CC280", Offset = "0x53CB280", VA = "0x53CC280", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002391")]
		[Address(RVA = "0x53CBFE0", Offset = "0x53CAFE0", VA = "0x53CBFE0")]
		[DebuggerHidden]
		public _003CGetEnumerator_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002392")]
		[Address(RVA = "0x53CC000", Offset = "0x53CB000", VA = "0x53CC000", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002393")]
		[Address(RVA = "0x53CC010", Offset = "0x53CB010", VA = "0x53CC010", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002395")]
		[Address(RVA = "0x53CC240", Offset = "0x53CB240", VA = "0x53CC240", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40012A9")]
	[FieldOffset(Offset = "0x10")]
	private CultureInfo m_startingCulture;

	[Token(Token = "0x40012AA")]
	[FieldOffset(Offset = "0x18")]
	private CultureInfo m_neutralResourcesCulture;

	[Token(Token = "0x40012AB")]
	[FieldOffset(Offset = "0x20")]
	private bool m_useParents;

	[Token(Token = "0x600238E")]
	[Address(RVA = "0x53CBE60", Offset = "0x53CAE60", VA = "0x53CBE60")]
	internal ResourceFallbackManager(CultureInfo startingCulture, CultureInfo neutralResourcesCulture, bool useParents)
	{
	}

	[Token(Token = "0x600238F")]
	[Address(RVA = "0x53CBF00", Offset = "0x53CAF00", VA = "0x53CBF00", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002390")]
	[Address(RVA = "0x53CBF70", Offset = "0x53CAF70", VA = "0x53CBF70", Slot = "4")]
	[IteratorStateMachine(typeof(_003CGetEnumerator_003Ed__5))]
	public IEnumerator<CultureInfo> GetEnumerator()
	{
		return null;
	}
}
