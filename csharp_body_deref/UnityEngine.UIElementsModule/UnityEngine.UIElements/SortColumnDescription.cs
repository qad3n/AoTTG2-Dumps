using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20000E5")]
public class SortColumnDescription
{
	[Token(Token = "0x20000E6")]
	internal class UxmlObjectFactory<T> : UxmlObjectFactory<T, UxmlObjectTraits<T>> where T : SortColumnDescription, new()
	{
		[Token(Token = "0x600065E")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000E7")]
	internal class UxmlObjectFactory : UxmlObjectFactory<SortColumnDescription>
	{
		[Token(Token = "0x600065F")]
		[Address(RVA = "0x4CC8820", Offset = "0x4CC8820", VA = "0x4CC8820")]
		public UxmlObjectFactory()
		{
		}
	}

	[Token(Token = "0x20000E8")]
	internal class UxmlObjectTraits<T> : UnityEngine.UIElements.UxmlObjectTraits<T> where T : SortColumnDescription
	{
		[Token(Token = "0x40003D0")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlStringAttributeDescription m_ColumnName;

		[Token(Token = "0x40003D1")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlIntAttributeDescription m_ColumnIndex;

		[Token(Token = "0x40003D2")]
		[FieldOffset(Offset = "0x0")]
		private readonly UxmlEnumAttributeDescription<SortDirection> m_SortDescription;

		[Token(Token = "0x6000660")]
		public override void Init(ref T obj, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000661")]
		public UxmlObjectTraits()
		{
		}
	}

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private int m_ColumnIndex;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_ColumnName;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private SortDirection m_SortDirection;

	[Token(Token = "0x17000118")]
	public string columnName
	{
		[Token(Token = "0x6000651")]
		[Address(RVA = "0x4CC84A0", Offset = "0x4CC84A0", VA = "0x4CC84A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000652")]
		[Address(RVA = "0x4CC84B0", Offset = "0x4CC84B0", VA = "0x4CC84B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000119")]
	public int columnIndex
	{
		[Token(Token = "0x6000653")]
		[Address(RVA = "0x4CC8510", Offset = "0x4CC8510", VA = "0x4CC8510")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000654")]
		[Address(RVA = "0x4CC8520", Offset = "0x4CC8520", VA = "0x4CC8520")]
		set
		{
		}
	}

	[Token(Token = "0x1700011A")]
	public Column column
	{
		[Token(Token = "0x6000655")]
		[Address(RVA = "0x4CC8550", Offset = "0x4CC8550", VA = "0x4CC8550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000656")]
		[Address(RVA = "0x4CC8560", Offset = "0x4CC8560", VA = "0x4CC8560")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700011B")]
	public SortDirection direction
	{
		[Token(Token = "0x6000657")]
		[Address(RVA = "0x4CC8570", Offset = "0x4CC8570", VA = "0x4CC8570")]
		get
		{
			return default(SortDirection);
		}
		[Token(Token = "0x6000658")]
		[Address(RVA = "0x4CC8580", Offset = "0x4CC8580", VA = "0x4CC8580")]
		set
		{
		}
	}

	[Token(Token = "0x14000019")]
	internal event Action<SortColumnDescription> changed
	{
		[Token(Token = "0x6000659")]
		[Address(RVA = "0x4CC85B0", Offset = "0x4CC85B0", VA = "0x4CC85B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600065A")]
		[Address(RVA = "0x4CC8660", Offset = "0x4CC8660", VA = "0x4CC8660")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x4CC8710", Offset = "0x4CC8710", VA = "0x4CC8710")]
	public SortColumnDescription()
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x4CC8720", Offset = "0x4CC8720", VA = "0x4CC8720")]
	public SortColumnDescription(int columnIndex, SortDirection direction)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x4CC8790", Offset = "0x4CC8790", VA = "0x4CC8790")]
	public SortColumnDescription(string columnName, SortDirection direction)
	{
	}
}
